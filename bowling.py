```
def bowling_score(score):
    score = score.replace('/', '')
    total = 0
    frame = 1
    while frame <= len(score) // 2:
        if score[2*frame-1] == 'X':
            total += 30
        elif score[2*frame-1] in ['7', '8', '9']:
            total += int(score[2*frame-1]) + 10
        else:
            first_roll = int(score[2*frame-1])
            second_roll = int(score[2*frame])
            if first_roll == 10:
                total += first_roll + second_roll
            elif first_roll + second_roll >= 10:
                total += first_roll + second_roll - 10
            else:
                total += first_roll + second_roll
        frame += 1
    return total