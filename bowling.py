```
def bowling_score(bowling):
    score = 0
    roll = 0
    for frame in range(1, 11):
        if bowling[roll:roll+2] == 'X':
            score += 10 + (10 - int(bowling[roll+1])) 
            roll += 2
        elif bowling[roll] == '/':
            first_roll = 10 - int(bowling[roll+1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            roll += 3
        else:
            first_roll = int(bowling[roll:roll+1])
            if bowling[roll+1] == 'X':
                score += 10 + first_roll
                roll += 2
            elif bowling[roll+1] == '/':
                second_roll = 10 - first_roll
                score += first_roll + second_roll
                roll += 3
            else:
                if first_roll < 10:
                    score += first_roll + int(bowling[roll+1])
                else:
                    score += 10 + int(bowling[roll+1])
                roll += 2
    return score