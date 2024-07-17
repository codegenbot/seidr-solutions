```
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= 10:
        if game[2*frame-2:2*frame].strip() == 'X':
            if frame < 10:
                if game[2*frame:2*frame+1].strip() == 'X':
                    score += 30
                else:
                    first_roll = int(game[2*frame:3*frame].strip())
                    score += 30 + first_roll
            else:
                score += 30
            frame += 1
        elif game[2*frame-2] == '/':
            first_roll = int(game[2*frame-3])
            second_roll = 10 - first_roll
            if frame < 10 and game[2*frame:2*frame+1].strip() == 'X':
                score += 10 + second_roll
            elif frame < 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(game[2*frame-2:2*frame])
            second_roll = int(game[2*frame-1])
            if first_roll + second_roll == 10:
                if frame < 10 and game[2*frame:3*frame].strip() == 'X':
                    score += 10 + 10
                else:
                    score += 10 + second_roll
            elif first_roll == 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
            frame += 1
    return score