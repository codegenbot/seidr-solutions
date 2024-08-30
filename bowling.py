```
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) for x in score.split()]
    total = 0
    roll = 0
    for i in range(10):
        if i < 9 and frames[i] == 10:
            total += 10 + frames[i+1] if i+1 < 10 else 10
            roll += 1
            try:
                i += 1
            except IndexError:
                pass
        elif i < 9 and frames[i] != 10:
            if roll == 1 and min(frames[i], 10) == 10:
                total += 20
            else:
                total += min(frames[i], 10) + (10 - min(frames[i], 10)) if min(frames[i], 10) < 10 else 0
            roll = max(roll, 1)
        else:
            total += frames[i]
    return total