```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(0, len(bowling), 2):
        if bowling[i] == 'X':
            score += 10 + (10 if i < 18 and bowling[i+2] == 'X' else 0)
            frame += 1
        elif bowling[i] == '/':
            first_roll = int(bowling[i-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(bowling[i])
            second_roll = int(bowling[i+1])
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
                frame += 1
            else:
                score += first_roll + second_roll
    return score