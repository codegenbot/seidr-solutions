```
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) for x in score]
    total = 0
    roll = 0
    for i in range(10):
        if i < 9 and frames[i] == 10:
            total += 10 + frames[i+1]
            roll += 1
            i += 1
        elif i < 9 and frames[i] != 10:
            total += min(frames[i], 10) + (10 - frames[i]) if roll > 0 else 0
            roll = max(roll, 1)
        else:
            total += frames[i]
    return total