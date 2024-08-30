```
def bowling_score(bowling):
    score = 0
    frame = 1
    i = 0
    while i < len(bowling):
        if bowling[i] == 'X':
            score += 10
            if frame < 9:
                if bowling[i+1] in '/X':
                    score += 10
                    i += 2
                else:
                    score += int(bowling[i+1])
                    i += 2
            frame += 1
        elif bowling[i] == '/':
            first_roll = 10 - int(bowling[i+1])
            if bowling[i+2] == 'X':
                score += 10 + first_roll
                i += 3
            else:
                score += first_roll + int(bowling[i+2])
                i += 3
            frame += 1
        else:
            if len(bowling) - i > 1 and bowling[i] == '0':
                score += int(bowling[i+1]) + int(bowling[i+2])
                i += 2
            elif bowling[i] != '0':
                score += int(bowling[i])
                frame += (1 if frame < 9 else 0)
            i += 1
    return score