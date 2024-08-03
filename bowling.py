```
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) if x.isdigit() else 10 for x in score]
    total = 0
    roll = 0
    for i in range(10):
        if frames[i] == 10:
            total += 10 + (frames[roll+1] if roll+1 < len(frames) and frames[roll+1].isdigit() else 0)
            roll += 2
        elif frames[i] + frames[i+1] >= 10:
            total += 10
            i += 1
            roll += 2
        else:
            total += frames[i]
            roll += 1
    return total