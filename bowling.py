```
def bowling_score(bowling):
    score = 0
    roll = 0
    for frame in range(10):
        if '/' in str(bowling)[frame*2:frame*2+2]:
            first_roll, second_roll = map(int, str(bowling)[frame*2:frame*2+2].split('/'))
            score += first_roll + second_roll
            roll += 1
        else:
            score += int(str(bowling)[frame*2:frame*2+2])
            roll += 1
    return score