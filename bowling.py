```
def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += 10 + int(frame[1])
        else:
            if int(frame[0]) == 10:
                score += 10 + 10
            else:
                score += int(frame[0]) + 10
    return score