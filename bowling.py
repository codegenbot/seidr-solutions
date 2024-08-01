```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            score += first_roll + second_roll
            roll += 1
        else:
            first_roll = int(frame[0])
            if first_roll == 10:
                score += first_roll + int(frame[1:])
                roll += 1
            else:
                score += first_roll + 10 - int(frame[1])
                roll += 2
    return score