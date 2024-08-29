```
def bowling_score(bowling_input):
    score = 0
    frame = 1
    rolls = list(map(int, bowling_input.replace('/', '')))
    for i in range(0, len(rolls), 2):
        if i + 1 < len(rolls) and rolls[i] == 10:
            score += 10 + rolls[i+1]
            frame += 1
        elif rolls[i] + rolls[i+1] == 10:
            score += 10
            frame += 1
        else:
            score += rolls[i] + rolls[i+1]
            if rolls[i] + rolls[i+1] < 10:
                for j in range(i+2, len(rolls), 2):
                    if rolls[j] + rolls[j+1] == 10:
                        score += rolls[j] + rolls[j+1]
                        frame += 1
                        break
        if frame >= 10:
            break
    return score