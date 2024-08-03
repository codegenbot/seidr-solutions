```
def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(0, len(bowling), 2):
        if bowling[i:i+2] == "X":
            score += 10 + (10 - int(bowling[:i].count("X"))) * 10
            frame += 1
        elif bowling[i] == "/":
            first_roll = 10 - int(bowling[i+1])
            second_roll = 10 - first_roll
            if first_roll > 0:
                score += first_roll + second_roll
            else:
                score += 10 + second_roll
            frame += 1
        else:
            first_roll = int(bowling[i:i+2])
            if first_roll < 10:
                score += first_roll
                frame += 1
            elif first_roll == 10:
                score += 10
                frame += 1
    return score