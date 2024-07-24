```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            if i < 8:
                score += 30
            elif i == 9 and frames[9-1] != '/':
                score += 30
            else:
                score += 20 + int(frames[11-i*2])
        elif '/' in frames[i]:
            first, second = map(int, frames[i].split('/'))
            if i < 8:
                score += first + second
            else:
                score += first + (10 - i)
        else:
            score += int(frames[i]) * 10
    return score