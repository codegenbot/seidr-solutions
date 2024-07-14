```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame) * 10 + 10
            roll += 2
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            score += first_roll + second_roll
            if first_roll == 10 or second_roll == 10:
                roll += 2
            else:
                roll += 3
        elif len(frame) > 2:
            first_roll = int(frame[:2])
            second_roll = int(frame[2:])
            score += first_roll + (10 - first_roll)
            if first_roll == 10:
                roll += 2
            else:
                roll += 3
    return score