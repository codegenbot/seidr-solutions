```
def bowling_score(game):
    score = 0
    roll = 1
    frames = game.upper().split('/')
    for frame in frames:
        if 'X' == frame:
            score += 10
            roll += 1
        elif len(frame) > 1:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            if first_roll == 10:
                roll += 2
            else:
                score += 10 + second_roll
                roll += 2
        else:
            score += int(frame)
            roll += 1
    return score