```
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) for x in score]
    total = 0
    i = 0
    while i < len(frames):
        if frames[i] == 10:
            total += frames[i]
            i += 1
        elif frames[i] + frames[i+1] >= 10:
            total += 10 + (frames[i+1] - 10) if frames[i+1] > 0 else 10
            i += 2
        else:
            total += frames[i] + frames[i+1]
            i += 2
    return total