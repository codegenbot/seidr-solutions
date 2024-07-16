```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(0, len(bowling), 2):
        if bowling[i] == "X":
            score += 10 + (10 - int(bowling[i + 1])) if frame < 9 else 10
            frame += 1
        elif bowling[i] == "/":
            score += 10 - int(bowling[i + 1])
            frame += 1
        else:
            rolls = int(bowling[i:i+2]) 
            score += rolls + (10 - rolls) if frame < 9 and rolls < 10 else rolls
            frame += 1
    return score