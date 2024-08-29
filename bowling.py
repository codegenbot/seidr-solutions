```
def bowling_score(bowling_input):
    score = 0
    frame = 1
    rolls = list(map(int, bowling_input.replace('/', '').split()))
    for i in range(0, len(rolls), 2):
        if i + 1 < len(rolls) and rolls[i] == 10:
            score += 10 + rolls[i+1]
            frame += 1
            i += 1
        elif i + 1 < len(rolls) and rolls[i] + rolls[i+1] == 10:
            score += 10
            frame += 1
        else:
            score += rolls[i] + rolls[i+1]
            frame += 1
    return score