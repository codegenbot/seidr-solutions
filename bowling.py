Here is the solution:

def bowling_score(game):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', game)]
    i = j = k = 0
    while i < len(roll):
        if roll[i] == 10:
            score += 10 + (10 if i+1 < len(roll) and roll[i+1] != 10 else 0)
            i += 2
        elif roll[i] + roll[i+1] >= 10:
            score += 10
            i += 2
        else:
            score += roll[i]
            i += 1
    return score