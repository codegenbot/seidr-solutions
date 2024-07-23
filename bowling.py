```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', frames)]
    for i in range(10):
        if '/' in str(i+1)+str(roll[i]):
            strike = True
        elif '-' in str(i+1)+str(roll[i]):
            spare = True
        else:
            strike = False
            spare = False
        if strike:
            score += 10 + roll[i+1]+roll[i+2]
            i += 2
        elif spare:
            score += 10
            i += 1
        else:
            score += roll[i] + roll[i+1]
    return score