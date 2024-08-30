def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            if frame < 9 and bowling[i+2].isdigit():
                score += 10 + int(bowling[i+1]) + int(bowling[i+2])
            else:
                score += 10
            frame += 1
        elif bowling[i] == '/':
            first_roll = int(bowling[:i].count('X')) * 10
            second_roll = 10 - int(bowling[i+1])
            if second_roll == 0:
                second_roll = int(bowling[i+2])
            score += first_roll + second_roll
            frame += 1
        else:
            if bowling[i] != '0':
                if i < len(bowling) - 1 and bowling[i+1].isdigit():
                    score += int(bowling[i]) + int(bowling[i+1])
                    frame += (1 if frame < 9 and bowling[i+2].isdigit() else 0)
                else:
                    score += int(bowling[i])
                    frame += (1 if frame < 9 and bowling[i+1].isdigit() else 0)
    return score