```
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) for x in score]
    total = 0
    roll = 0
    for i in range(len(frames)):
        if i < len(frames)-1 and frames[i] == 10:
            total += 10 + frames[i+1]
            roll += 2
            i += 1
        elif i < len(frames)-1 and frames[i] != 10:
            if roll > 0 and frames[i] + frames[i+1] >= 10:
                total += 10
                roll = 1
                i += 1
            else:
                total += min(frames[i], 10)
                roll += (10 - frames[i]) if roll == 1 else 1
        else:
            total += frames[i]
    return total