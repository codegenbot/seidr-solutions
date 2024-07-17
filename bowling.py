```
def bowling_score(game):
    score = 0
    game += 'X' * (10 - len(game)) # ensure a full round of 10 frames
    frame = 1
    while frame <= 10:
        if game[2*frame-2:2*frame] == 'XXX':
            score += 30
            frame += 1
        elif game[2*frame-2] == '/':
            first_roll = int(game[2*frame-3])
            second_roll = 10 - first_roll
            if first_roll + second_roll < 10:
                while frame <= 10 and (game[2*frame-4:2*frame] == 'X' or game[2*frame-4] == '/'):
                    score += int(game[2*frame-3])
                    frame += 1
            else:
                score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(game[2*frame-2:2*frame])
            second_roll = int(game[2*frame-1])
            if first_roll + second_roll == 10:
                if frame < 10 and game[4*frame-3] == 'X':
                    while frame <= 10 and (game[2*frame-4:2*frame] == 'X' or game[2*frame-4] == '/'):
                        score += int(game[2*frame-3])
                        frame += 1
                else:
                    score += first_roll + second_roll
            elif first_roll == 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
            frame += 1
    return score