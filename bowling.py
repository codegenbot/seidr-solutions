```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            a, b = map(int, re.split('/', frames[i]))
            score += max(a, b)
        else:
            score += int(frames[i])
    return score