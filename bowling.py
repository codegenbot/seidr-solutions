def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            score += 10
            if frame < 9 and bowling[i+2].isdigit():
                score += int(bowling[i+1])
            frame += 1
        elif bowling[i] == '/':
            first_roll = int(bowling[:i].count('X')) * 10
            second_roll = 10 - int(bowling[i+1])
            score += first_roll + second_roll
            frame += 1
        else:
            if bowling[i] != '0':
                score += int(bowling[i])
            frame += (1 if i < len(bowling) - 2 and bowling[i+2].isdigit() else 0)
    return score