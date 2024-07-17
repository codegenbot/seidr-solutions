```
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= 10:
        if game[2*frame-2:2*frame] == 'X':
            score += 30
            if frame < 10:
                score += int(game[5*frame-3:5*frame]) + int(game[6*frame-3:6*frame])
            frame += 1
        elif game[2*frame-2] == '/':
            first_roll = int(game[2*frame-3])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(game[2*frame-2:2*frame])
            second_roll = int(game[2*frame-1])
            if first_roll + second_roll == 10:
                score += 10
            elif first_roll == 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
            frame += 1
    return score