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
            if roll == 1:
                total += min(frames[i], 10)
            else:
                total += 10
            roll = max(roll, 2 - (i+1)%2)
        else:
            total += frames[i]
    return total