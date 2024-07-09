```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(0, len(bowling), 2):
        if bowling[i].isdigit():
            strike = False
            if i < len(bowling) - 1 and bowling[i+1] == '/':
                i += 1
                score += 10
                frame -= 1
            elif int(bowling[i]) == 10:
                score += 10
                frame -= 1
            else:
                score += int(bowling[i])
                if i < len(bowling) - 1 and bowling[i+1].isdigit():
                    score += int(bowling[i+1])
                elif bowling[i+1] == '/':
                    strike = True
            while frame > 0 and (strike or i >= len(bowling)):
                if strike:
                    score += 10
                    frame -= 1
                else:
                    score += int(bowling[i+1])
                    i += 1
                    if i < len(bowling) - 1 and bowling[i].isdigit():
                        score += int(bowling[i])
                    elif i < len(bowling) - 1 and bowling[i] == '/':
                        strike = True
                frame -= 1
    return score