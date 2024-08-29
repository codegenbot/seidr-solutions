```
def bowling_score(bowling_input):
    score = 0
    frame = 0
    for roll in bowling_input.split('/'):
        if len(roll) == 1:
            score += 10
        else:
            first_roll = int(roll[0])
            second_roll = int(roll[-1])  # Changed to [1] as you want the last character
            if first_roll + second_roll == 10:
                score += 10
            elif first_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
        frame += 1
    return score