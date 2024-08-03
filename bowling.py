```
def bowling_score(bowling):
    score = 0
    roll = 0
    for i in range(10):
        if '/' in str(bowling)[i*2:i*2+2]:
            first, second = map(int, str(bowling)[i*2:i*2+2].split('/'))
            if first == 10:
                score += 10 + sum(str(bowling)[(i+1)*2:(i+1)*2+2])
            else:
                score += first + second
        elif str(bowling)[i*2:i*2+1] != 'X':
            score += int(str(bowling)[i*2:i*2+1]) * 10
        roll += 1
    return score