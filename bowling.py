```
def bowling_game(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:  # strike
            score += 10 + (10 * (9 - roll))
            roll += 1
        elif len(frame) == 2:
            if int(frame[0]) + int(frame[1]) >= 10:
                score += 10
            else:
                score += sum(map(int, frame))  # spare
            roll += 1
        else:  # normal roll
            score += sum(map(int, frame))
    return score