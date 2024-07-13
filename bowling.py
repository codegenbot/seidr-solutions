```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            left, right = map(int, frames[i].split('/'))
            score += max(left, 10) + max(right, 10)
        else:
            score += int(frames[i])
    return score