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
            first_roll = 10 - int(bowling[i+1])
            second_roll = int(bowling[:i].count('X')) * 10
            if first_roll > 0:
                score += first_roll
            if second_roll > 0:
                score += second_roll
            frame += 1
        else:
            if len(bowling) - i < 2 or bowling[i+1] == 'X' or bowling[i+1] == '/':
                score += int(bowling[i])
            else:
                first_roll = int(bowling[i])
                second_roll = int(bowling[i+1])
                if first_roll + second_roll > 10:
                    score += 10
                else:
                    score += first_roll + second_roll
                frame += (1 if first_roll + second_roll < 10 or len(bowling) - i == 1 else 0)
    return score