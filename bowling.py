def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            score += 10
            if frame < 9 and bowling[i+1].isdigit():
                score += int(bowling[i+1])
            frame += 1
        elif bowling[i] == '/':
            first_roll = 10 - int(bowling[i+1])
            second_roll = int(bowling[i-1])
            if i > 0 and bowling[i-2] == 'X':
                score += 10 + first_roll
                frame += 1
            else:
                score += second_roll
            frame += 1
        else:
            if i < len(bowling) - 1 and bowling[i+1] == 'X':
                score += int(bowling[i]) * 2
                frame += 1
            elif i < len(bowling) - 1 and bowling[i+1].isdigit():
                score += int(bowling[i]) + int(bowling[i+1])
                frame += 1
            else:
                score += int(bowling[i])
                frame += (1 if frame < 9 and bowling[i+2].isdigit() else 0)
    return score