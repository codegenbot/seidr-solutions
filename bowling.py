def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            score += 10
            if frame < 9 and bowling[i+1].isdigit():
                score += int(bowling[i+1])
            frame += 1
        elif bowling[i] == '/':
            first_roll = 10 - int(bowling[i+1])
            second_roll = int(bowling[i-1])
            if second_roll != 0:
                score += first_roll + second_roll
            else:
                score += first_roll * 2
            frame += 1
        else:
            rolls = [int(x) for x in bowling[i:i+2].split()]
            if sum(rolls) == 10:
                if len(rolls) == 1:
                    score += rolls[0]
                else:
                    score += rolls[0] + rolls[1]
            else:
                score += sum(rolls)
            frame += (1 if frame < 9 and bowling[i+2].isdigit() else 0)
    return score