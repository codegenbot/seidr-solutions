```
def bowling_score(bowling):
    score = 0
    frame = 1
    i = 0
    while i < len(bowling):
        if bowling[i] == 'X':
            if frame < 9:
                if bowling[i+2].isdigit():
                    score += 10 + int(bowling[i+1:i+3])
                else:
                    score += 10
            else:
                score += 10
            i += 2
            frame += 1
        elif bowling[i] == '/':
            first_roll = int(bowling[:i].count('X')) * 10
            second_roll = 10 - int(bowling[i+1])
            score += first_roll + second_roll
            i += 2
            frame += 1
        else:
            if bowling[i] != '0':
                score += int(bowling[i])
                if frame < 9 and bowling[i+2].isdigit():
                    i += 3
                    frame += 1
                else:
                    i += 1
                    frame += (1 if frame < 9 and bowling[i].isdigit() else 0)
    return score