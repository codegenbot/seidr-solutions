```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(0, len(bowling), 2):
        if bowling[i].isdigit():
            first_roll = int(bowling[i])
            second_roll = 10 - int(bowling[i + 1].replace('/', ''))
            if first_roll == 10:
                score += 10 + (10 - second_roll)
            elif second_roll == 10:
                score += first_roll + 10
            else:
                score += first_roll + second_roll
        else:
            if bowling[i] == 'X':
                score += 10 + (10 - int(bowling[i-1].replace('/', '')))
            frame -= 1
    return score