```
def bowling_score(bowling):
    score = 0
    roll = 0
    frames = [int(x) for x in bowling.replace('/', '')]
    for i in range(10):
        if frames[i] == 10:
            score += 10 + sum(frames[i+1:i+11])
            roll += 2
        elif sum(frames[i:i+2]) < 10:
            score += sum(frames[i:i+2])
            roll += 2
        else:
            score += 10 + sum(frames[i+1:])
            roll = 2
    return score