```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
        elif len(frame) > 1:
            if int(frame[0]) == 10:
                score += 10 + 10 + roll
            else:
                score += int(frame[0]) * 2 + roll
            roll = 0
        else:
            score += int(frame)
        if roll > 0:
            score -= roll
            roll = 0
    return score