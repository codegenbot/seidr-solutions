```
def bowling_score(bowling):
    score = 0
    roll = 0
    for frame in range(1, 11):
        if '/' in str(bowling)[frame*2-1:frame*2+2]:
            strike = False
            spare = False
            if str(bowling)[frame*2-1:frame*2] == 'X':
                score += 10
                roll += 1
                continue
            parts = list(map(int, re.findall('\d', str(bowling)[frame*2-1:frame*2+2])))
            if sum(parts) >= 10:
                spare = True
                score += sum(parts)
                roll += len(parts)
            else:
                strike = True
                score += parts[0]
                roll += 1
        else:
            parts = list(map(int, re.findall('\d', str(bowling)[frame*2-1:frame*2+2])))
            if sum(parts) >= 10:
                score += sum(parts)
                roll += len(parts)
            else:
                score += parts[0]
                roll += 1
    return score