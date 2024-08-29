```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10
            roll += 1
        elif len(frame) == 2:
            strike = int(frame[0]) + int(frame[1])
            score += strike
            roll += 1
        else:
            first_roll, second_roll = map(int, frame)
            if first_roll == 10:
                score += 10 + second_roll
                roll += 2
            elif second_roll == 10:
                score += first_roll + 10
                roll += 2
            else:
                score += first_roll + second_roll
                roll += 2
    return score