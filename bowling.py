```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif '/' in frames[i]:
            a, b = map(int, frames[i].split('/'))
            score += a + b
        else:
            score += sum(map(int, frames[i]))
    return score