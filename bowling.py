```
def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            strike = int(frame[0]) * 10 + int(frame[1])
            score += strike
        else:
            spare = int(frame[0]) * 10 + (10 - int(frame[0]))
            score += spare
    return score