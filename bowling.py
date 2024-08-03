```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i].isdigit():
            strike = False
            while i < len(bowling) and bowling[i].isdigit():
                i += 1
            if i < len(bowling) and bowling[i] == '/':
                i += 1
                while i < len(bowling) and bowling[i].isdigit():
                    i += 1
                strike = True
        else:
            i -= 1
            break
        if frame < 10:
            if strike:
                score += 30
            elif int(bowling[:i]) == 10:
                score += 10 + 10
            else:
                score += min(int(bowling[:i]), 10) * 2
            frame += 1
        else:
            if strike:
                score += 10 + bowling[i:i+2].count('X') * 10
            elif int(bowling[:i]) == 10:
                score += 10 + min(int(bowling[i]), 10) * 10
    return score