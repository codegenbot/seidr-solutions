```
def bowling_score(score):
    frames = [int(i) for i in score]
    total = 0
    roll = 0
    for frame in range(10):
        if frames[roll] == 10:
            total += 10
            roll += 1
        elif frames[roll:roll+2].count('X'):
            total += 10
            roll += 2
        else:
            total += min(frames[roll], 10 - sum(frames[:roll]))
            if frames[roll] < 10 - sum(frames[:roll]):
                roll += 1
            else:
                roll += 2
    return total