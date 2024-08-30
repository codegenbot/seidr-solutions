```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            if frame < 10:
                score += 10 + (10 if bowling[i+1].isdigit() and bowling[i+2].isdigit() else 0)
            else:
                score += 10
            frame += 1
        elif bowling[i] == '/':
            first_roll = int(bowling[:i].count('X')) * 10
            second_roll = 10 - int(bowling[i+1])
            if frame < 9 and not bowling[i+2].isdigit():
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
            frame += 1
        else:
            if i < len(bowling) - 1 and bowling[i] == '0' and bowling[i+1] != '/':
                continue
            score += int(bowling[i])
            if frame < 10 and not bowling[i].isdigit():
                frame += 1
    return score