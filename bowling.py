```
def bowling_score(frames):
    score = 0
    rolls = [int(x) for x in frames.replace('/', '')]
    for i in range(0, 10 * 2, 2):
        if rolls[i] == 10:
            score += 10 + rolls[i+1:i+3].count(10)
        elif sum(rolls[i:i+2]) == 10:
            score += 10
        else:
            score += rolls[i] + rolls[i+1]
    return score