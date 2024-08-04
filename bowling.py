```
def bowling_score(bowling_string):
    score = 0
    frame = 1
    for roll in bowling_string.split('/'):
        if len(roll) == 2:
            first_roll = int(roll[0])
            second_roll = 10 - first_roll
            if second_roll > 0:
                score += first_roll + second_roll
                frame += 1
        elif len(roll) == 1:
            score += int(roll)
            frame += 1
    return score