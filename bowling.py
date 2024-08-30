def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            score += 10
            if frame < 9 and bowling[i+1].isdigit():
                score += int(bowling[i+1]) + int(bowling[i+2])
            frame += 1
        elif bowling[i] == '/':
            first_roll = 10 - int(bowling[i+1])
            score += first_roll
            if int(bowling[i-1]) == 10:
                score += 10
            else:
                score += int(bowling[i-1])
            frame += 1
        else:
            if len(bowling) > i + 1 and bowling[i+1] != '0':
                first_roll = int(bowling[i])
                second_roll = int(bowling[i+1])
                score += first_roll + second_roll
                frame += 1
            elif i == len(bowling) - 2:
                score += 10
                frame += 1
            else:
                score += int(bowling[i])
                frame += (1 if frame < 9 and bowling[i+2].isdigit() else 0)
    return score