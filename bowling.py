```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(0, len(bowling), 2):
        if bowling[i].isdigit() and bowling[i+1].isdigit():
            strikes = int(bowling[i])
            if strikes == 10:
                if frame < 9:
                    score += 30
                else:
                    score += 10 + int(bowling[i+2]) + int(bowling[i+3])
            else:
                for j in range(1, min(int(bowling[i]), int(bowling[i+1])) + 1):
                    score += j
                if strikes < 5:
                    frame -= 1
        elif bowling[i] == 'X':
            score += 10
            if frame < 9:
                score += 30
            else:
                score += 10
            frame -= 1
        elif bowling[i].isdigit() and bowling[i+1] in '/-X':
            for j in range(1, int(bowling[i]) + 1):
                score += j
            if bowling[i+1] == 'X':
                score += 10
                if frame < 9:
                    score += 30
                else:
                    score += 10
            elif bowling[i+1] in '/-':
                for j in range(1, int(bowling[i+2]) + 1):
                    score += j
            frame -= 1
    return score