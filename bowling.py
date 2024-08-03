```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif '/' in frames[i]:
            left, right = map(int, frames[i].split('/'))
            if i < 9:
                if frames[i+1] == 'X':
                    score += left + right + 10
                else:
                    score += left + right
            else:
                score += left + right
        else:
            score += int(frames[i]) * 10
    return score