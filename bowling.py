```
def bowling_score(bowling):
    score = 0
    roll = 0
    for frame in bowling.split('/'):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * (10 - roll)
            roll += 1
        elif len(frame) > 1:
            score += sum(int(i) for i in frame)
            roll = 0
    return score