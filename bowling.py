```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i].isdigit():
            strike = False
            if i < 9 and frames[i+1].isdigit() and frames[i+2].isdigit():
                strike = True
            score += 10 + (int(frames[i]) * 2 if not strike else 0)
        elif frames[i] == 'X':
            score += 10
        elif '/' in frames[i]:
            a, b = map(int, frames[i].split('/'))
            score += a + b
    return score