```
def bowling_score(bowling):
    score = 0
    roll = 0
    for frame in range(1,11):
        if len(bowling) < (frame+1)*2:
            break
        if bowling[roll].isdigit():
            strike = False
            while not bowling[roll:].startswith('/'):
                if len(bowling) < roll+(int(bowling[roll])+2):
                    break
                score += int(bowling[roll])
                roll += str(int(bowling[roll])).__len__()+1
        else:
            score += 10
            strike = True
        if strike:
            continue
        while len(bowling) > roll+1 and bowling[roll:].startswith('/'):
            score += 5
            roll += 2
    return score