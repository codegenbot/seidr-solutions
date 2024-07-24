```
def bowling_score(bowling):
    score = 0
    roll = 0
    for i in range(10):
        if '/' in str(bowling)[i]:
            a, b = map(int, str(bowling)[i].split('/'))
            score += a + b
            roll = max(a, b)
        else:
            score += int(str(bowling)[i])
            roll = int(str(bowling)[i])
    return score