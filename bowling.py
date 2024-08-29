```
def bowling_score(bowling_input):
    score = 0
    frame = 1
    rolls = list(map(int, bowling_input.replace('/', '').split()))
    for i in range(0, len(rolls), 2):
        if rolls[i] == 10:
            score += 10 + rolls[i+1]
        elif rolls[i] + rolls[i+1] == 10:
            score += 10
        else:
            score += rolls[i] + rolls[i+1]
        if frame < 10 and (rolls[i] == 10 or rolls[i]+rolls[i+1] < 10):
            score += next(rolls[i+2:] or [0])
    return score