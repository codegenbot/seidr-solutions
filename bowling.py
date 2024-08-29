```
def bowling_score(bowling_input):
    score = 0
    frame = 1
    rolls = [int(x) for x in bowling_input.split('/')]
    i = 0
    while len(rolls) > i:
        if rolls[i] == 10: 
            score += 10
            i += 1
        elif i < len(rolls)-1 and rolls[i]+rolls[i+1] == 10:
            score += 10
            i += 2
        else:
            score += rolls[i]
            i += 1
    return score