```
def bowling_score(bowling):
    score = 0
    roll = 0
    for i in range(10):
        if '/' in str(bowling)[i:i+2]:
            s1, s2 = map(int, str(bowling)[i:i+2].split('/'))
            score += s1 + s2
            roll += 2
        else:
            score += int(str(bowling)[i])
            roll += 1
    return score