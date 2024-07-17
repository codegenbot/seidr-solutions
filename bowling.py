```
def bowling(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    i = 0
    while i < len(score):
        if score[i] == 'X':
            total_score += 10
            if i < len(score) - 1 and score[i+1] != 'X':
                total_score += 10 - int(score[i+1])
            frame += 1
            i += 2
        elif score[i] == '-':
            first_roll = 10 - int(score[i-1])
            if i < len(score) - 2 and score[i+2] != 'X':
                total_score += first_roll + int(score[i+1])
            else:
                total_score += first_roll
            frame += 1
            i += 3
        else:
            first_roll = int(score[i])
            if i < len(score) - 1 and score[i+1] != 'X' and score[i+1] != '-':
                second_roll = int(score[i+1])
                total_score += first_roll + second_roll
                frame += 1
                i += 2
            else:
                total_score += first_roll + 10
                frame += 1
                i += 2
    return total_score