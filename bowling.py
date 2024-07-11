```
def bowling_score(s):
    score = 0
    rolls = s.split('/')
    for i in range(10):
        if len(rolls[i]) == 1 or (len(rolls) > i+1 and len(rolls[i+1]) == 1):
            if len(rolls[i]) == 1:
                score += 10
            else:
                score += int(rolls[i])
        elif len(rolls[i]) == 2:
            roll = sum(map(int, rolls[i]))
            if i < 8 and (len(rolls) > i+1 and len(rolls[i+1]) in [1, 2]):
                if sum(map(int, rolls[i:i+2])) == 10:
                    score += roll + int(rolls[i+1])
                else:
                    score += roll
            elif roll < 10:
                score += roll
        else:
            score += int(rolls[i]) * 2
    return score