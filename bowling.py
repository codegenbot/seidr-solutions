```
def bowling_score(bowling):
    score = 0
    frame = 1
    i = 0
    while i < len(bowling):
        if bowling[i] == 'X':
            if frame < 9:
                if bowling[i+2].isdigit():
                    score += 10 + int(bowling[i+1])
                else:
                    score += 10 + 10
            else:
                score += 10
            i += 3
            frame += 1
        elif bowling[i] == '/':
            first_roll = int(bowling[:i].count('X')) * 10
            second_roll = 10 - int(bowling[i+1])
            if second_roll < 10:
                score += first_roll + second_roll
            else:
                score += first_roll + 10
            i += 2
            frame += 1
        else:
            first_roll = int(bowling[i])
            if bowling[i+1] == 'X' or (bowling[i+1].isdigit() and bowling[i+2] == '/'):
                score += first_roll + 10
                i += 2
                frame += 1
            elif bowling[i+1].isdigit():
                score += first_roll + int(bowling[i+1])
                i += 2
                frame += (1 if frame < 9 and bowling[i].isdigit() else 0)
            else:
                score += first_roll
                i += 1
    return score