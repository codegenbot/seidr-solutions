```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            x1, x2 = map(int, re.split('/', frames[i]))
            score += max(x1, x2) + (10 - i)
        else:
            score += int(frames[i])
    return score