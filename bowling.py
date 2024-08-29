```
def bowling_score(bowling_input):
    score = 0
    frame = 1
    rolls = [int(roll) for roll in bowling_input.split('/')]
    i = 0
    while len(rolls) > i:
        if rolls[i] == 10: 
            score += 10
            i += 1
        elif rolls[i:i+2].sum() == 10:
            score += 10
            i += 2
        else:
            score += rolls[i]
            i += 1
            if rolls[i] + rolls[i+1] == 10:
                score += rolls[i+1]
                i += 1
    return score