```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            if i < 9:
                score += 30
            else:
                score += 10 + (10 - i) * 10
        elif '/' in frames[i]:
            first, second = map(int, frames[i].split('/'))
            if i < 8:
                score += first + second
            else:
                score += first + second + (10 - i) * 10
        else:
            score += int(frames[i]) * 10
    return score