```
def bowling_score(bowling):
    score = 0
    roll = 0
    for i in range(0, len(bowling), 2):
        if bowling[i] == 'X':
            score += 10 + (10 - int(bowling[roll+1])) if i < 9 else 10
            roll += 2
        elif bowling[i] == '/':
            score += 10 - int(bowling[roll])
            roll += 2
        else:
            score += sum(map(int, bowling[i:i+2]))
            roll += 2
    return score