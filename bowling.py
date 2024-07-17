```
def bowling(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    for i in range(0, len(score), 2):
        if score[i] == 'X':
            if i < len(score) - 1 and score[i+1] != 'X' and score[i+1] != '-':
                total_score += 10 + (10 - int(score[i+1:]))
            else:
                total_score += 10
            frame += 1
        elif score[i] == '-':
            first_roll = 10 - int(score[i-1:i])
            if i < len(score) - 2 and score[i+2] != 'X' and score[i+2] != '-':
                total_score += first_roll + int(score[i+1:i+2]) + int(score[i+2:i+3])
            else:
                total_score += first_roll + int(score[i+1:i+2])
            frame += 1
        else:
            first_roll = int(score[i])
            if i < len(score) - 1 and score[i+1] == 'X':
                total_score += first_roll + 10
            elif i < len(score) - 1 and score[i+1] != 'X' and score[i+1] != '-':
                total_score += first_roll + int(score[i+1])
            else:
                total_score += first_roll
            frame += 1
    return total_score