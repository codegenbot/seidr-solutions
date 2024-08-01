```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(0, len(bowling), 2):
        if bowling[i] == 'X':
            score += 10 + (10 - int(bowling[i+1])) if frame < 9 else 10
            frame += 1
        elif bowling[i] == '/':
            first_roll = 10 - int(bowling[i+1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(bowling[i:i+2])
            if first_roll < 10:
                score += first_roll
                frame += 1
            else:
                score += first_roll
                if bowling[i+2] == 'X':
                    score += 10
                    frame += 1
                elif bowling[i+2] == '/':
                    second_roll = 10 - int(bowling[i+3:i+4])
                    score += second_roll
                    frame += 1
    return score