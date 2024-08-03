```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i].isdigit():
            score += int(frames[i])
        else:
            first, second = map(int, frames[i].split('/'))
            score += first + second
    return score