```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(0, len(bowling), 2):
        if bowling[i] == 'X':
            score += 10 + (10 - int(bowling[i+1])) if frame < 9 else 25
        elif bowling[i] == '/':
            first_roll = int(bowling[i-2])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        else:
            score += int(bowling[i-1]) + int(bowling[i])
        frame += (bowling[i] == 'X') or (bowling[i] == '/')
    return score