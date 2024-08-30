def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            if frame < 9 and bowling[i+2].isdigit():
                score += 10 + int(bowling[i+1])
            else:
                score += 10
            frame += 1
        elif bowling[i] == '/':
            first_roll = int(bowling[:i].count('X')) * 10
            second_roll = 10 - int(bowling[i+1])
            if second_roll < 10 and bowling[i+2].isdigit():
                score += first_roll + second_roll + int(bowling[i+2])
            else:
                score += first_roll + second_roll
            frame += 1
        else:
            if bowling[i] != '0':
                score += int(bowling[i])
                if frame < 9 and bowling[i+1].isdigit():
                    frame += 1
    return score