```
def bowling_score(s):
    score = 0
    roll = []
    for c in s:
        if c.isdigit():
            roll.append(int(c))
        else:
            if len(roll) == 2 and (roll[0] + roll[1]) >= 10:
                score += 10 - min(roll)
                roll = []
            elif len(roll) > 0:
                score += sum(roll)
                roll = []
            else:
                continue
    if len(roll) == 2 and (roll[0] + roll[1]) >= 10:
        score += 10 - min(roll)
    elif len(roll) > 0:
        score += sum(roll)
    return score