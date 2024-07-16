```
def bowling_score(game):
    score = 0
    frame = 0
    for roll in game + 'X':
        if roll == 'X':
            if frame < 9:
                score += 10 + (10 - int(game[2*frame:2*frame+1])) if frame % 2 == 0 else 10
            else:
                score += 10
            frame += 1
        elif roll == '/':
            first_roll = int(game[:2])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            game = game[2:]
            frame += 1
        else:
            if frame < 9:
                if int(roll) + int(game[2*frame:2*frame+1]) >= 10:
                    score += 10
                else:
                    score += int(roll) + int(game[2*frame:2*frame+1])
                frame += 1
            else:
                score += int(roll)
    return score