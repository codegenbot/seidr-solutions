```
def bowling_score(bowling):
    score = 0
    roll = 0
    for frame in range(10):
        if '/' in str(bowling)[frame*2:frame*2+2]:
            strike, spare = map(int, str(bowling)[frame*2:frame*2+2].split('/'))
            if strike == 10:
                score += strike + roll
                roll = 0
            elif spare < 10:
                score += spare + roll
                roll = 0
            else:
                score += spare + int(str(bowling)[frame*2+1:frame*2+3])
                roll = int(str(bowling)[frame*2+1:frame*2+3])
        elif str(bowling)[frame*2:frame*2+1] == 'X':
            score += 10
            roll = 0
        else:
            score += int(str(bowling)[frame*2:frame*2+1]) + int(str(bowling)[frame*2+1:frame*2+2])
            if int(str(bowling)[frame*2:frame*2+1]) == 10 and frame < 8:
                roll = int(str(bowling)[frame*2:frame*2+1])
            else:
                roll = int(str(bowling)[frame*2:frame*2+1]) + int(str(bowling)[frame*2+1:frame*2+2])
    return score