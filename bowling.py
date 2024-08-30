```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            score += 10
            if frame < 9:
                if bowling[i+1].isdigit():
                    score += int(bowling[i+1]) + 10
                else:
                    score += 10
            frame += 1
        elif bowling[i] == '/':
            first_roll = 10 - int(bowling[i+1])
            second_roll = int(bowling[:i].count('X')) * 10
            if first_roll < 10 and len(bowling) > i + 2:
                if bowling[i+2].isdigit():
                    score += first_roll + int(bowling[i+2])
                else:
                    score += first_roll
            else:
                score += second_roll
            frame += 1
        else:
            score += int(bowling[i])
            if frame < 9 and len(bowling) > i + 1:
                if bowling[i+1].isdigit():
                    frame += (int(bowling[i+1]) == 0)
                else:
                    frame += 1
    return score