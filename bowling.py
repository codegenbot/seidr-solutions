```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            score += 30
            frame += 1
        elif bowling[i] == '/':
            first_roll = int(bowling[:i].count('X')) * 10 + 10 - int(bowling[:i-1].count('/'))*5
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        elif bowling[i].isdigit():
            if i < len(bowling) - 1 and bowling[i+1].isdigit() and int(bowling[i]) + int(bowling[i+1]) <= 10:
                score += int(bowling[i]) + int(bowling[i+1])
                frame += 1
                i += 1
            else:
                score += int(bowling[i])
                frame += 1
    return score