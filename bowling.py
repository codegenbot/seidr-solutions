```
def bowling_score(bowling):
    score = 0
    frame = 1
    i = 0
    while i < len(bowling):
        if bowling[i] == 'X':
            score += 10
            if frame < 9:
                if bowling[i+2].isdigit():
                    score += 10
                else:
                    score += int(bowling[i+1])
            frame += 1
            i += 1
        elif bowling[i] == '/':
            first_roll = 10 - int(bowling[i+1])
            score += first_roll
            if frame < 9:
                score += int(bowling[i-1])
            frame += 1
            i += 2
        else:
            if len(bowling) > i + 1 and bowling[i+1] == 'X':
                score += 10 + int(bowling[i])
                frame += 1
                i += 1
            elif len(bowling) > i + 1 and bowling[i+1] == '/':
                first_roll = 10 - int(bowling[i+1])
                score += first_roll + int(bowling[i])
                frame += 1
                i += 2
            else:
                score += int(bowling[i])
                if frame < 9 and bowling[i+1].isdigit():
                    score += int(bowling[i+1])
                frame += (1 if frame < 9 and bowling[i+1].isdigit() else 0)
                i += 1
    return score