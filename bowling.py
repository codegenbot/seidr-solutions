```
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= 10:
        if game[2*frame-2:2*frame].strip() == 'X':
            if frame < 10:
                if game[4*frame-3].strip() != '/':
                    first_roll = 10
                    second_roll = int(game[4*frame-1])
                    score += first_roll + second_roll
                else:
                    score += 30
            else:
                score += 30
            frame += 1
        elif game[2*frame-2].strip() == '/':
            first_roll = 10 - int(game[2*frame-1])
            second_roll = 10 - first_roll
            if first_roll > 0 and second_roll > 0:
                score += first_roll + second_roll
            else:
                score += 10
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