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
            if i > 0 and bowling[i-1] == 'X':
                first_roll += 10
            score += first_roll
            frame += 1
            i += 2
        else:
            first_roll = int(bowling[i])
            if bowling[i+1].isdigit():
                score += first_roll + int(bowling[i+1])
                frame += 1
                i += 2
            else:
                score += first_roll + 10
                frame += 1
                i += 2
    return score