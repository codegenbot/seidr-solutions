```
def bowling_score(frames):
    score = 0
    frame = 0
    for roll in frames:
        if roll == 'X':
            score += 30
            frame += 1
        elif roll == '/':
            first_roll = int(roll[0])
            second_roll = 10 - first_roll
            score += (first_roll + second_roll)
            frame += 1
        else:
            first_roll = int(roll[0])
            if len(roll) > 1 and roll[1] == '/':
                score += (first_roll * 2)
                frame += 1
            else:
                score += first_roll
    return score