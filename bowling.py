```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            if first_roll == 10:
                roll += 10
            else:
                score += first_roll + second_roll
                roll += 1
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = 10 - (first_roll + second_roll)
            if first_roll == 10:
                score += 10 + third_roll
                roll = 2
            elif second_roll == 10:
                score += first_roll + 10
                roll = 2
            else:
                score += first_roll + second_roll
                roll = 3
    return score