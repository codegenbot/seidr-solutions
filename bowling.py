```
def bowling_score(bowling_input):
    score = 0
    frame = 1
    rolls = list(map(int, bowling_input.replace('/', '').split()))
    for i in range(0, len(rolls), 2):
        if i + 2 < len(rolls) and rolls[i] == 10:
            score += 10 + rolls[i+1]
            frame += 1
        elif rolls[i] + rolls[i+1] == 10:
            score += 10
            frame += 1
        else:
            score += rolls[i] + rolls[i+1]
    if len(rolls) > 20 and rolls[-2:] == [10, 0]:
        score += 10
    return score