def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            if frame < 9:
                score += 10 + int(bowling[i+2])
            else:
                score += 10
            frame += 1
        elif bowling[i] == '/':
            first_roll = int(bowling[:i].count('X')) * 10
            second_roll = 10 - int(bowling[i+1])
            score += first_roll + second_roll
            frame += 1
        else:
            if len(bowling) - i > 2 and bowling[i:i+3].isdigit():
                score += int(bowling[i:i+2]) + int(bowling[i+2])
            elif len(bowling) - i > 1 and bowling[i+1].isdigit():
                score += int(bowling[i])
            frame += (1 if frame < 9 and not bowling[i].isdigit() else 0)
    return score