```
def bowling_score(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    for i in range(0, len(score), 2):
        if score[i].isdigit():
            first_roll = int(score[i])
            second_roll = int(score[i+1]) if i+1 < len(score) else 10
            if first_roll == 10:
                total_score += 10 + (10 - second_roll)
                frame += 1
            elif second_roll == 10:
                total_score += first_roll + 10
                frame += 1
            elif first_roll + second_roll < 11:
                total_score += first_roll + second_roll
                frame += 1
            else:
                if first_roll == 9 and score[i+2].isdigit():
                    total_score += 9 + int(score[i+2])
                    frame += 1
                else:
                    total_score += first_roll + 10
                    frame += 1
        elif score[i] == 'X':
            total_score += 10
            frame += 1
    return total_score