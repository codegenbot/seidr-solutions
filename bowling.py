```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', frames)]
    for i in range(0, 10):
        if len(str(i+1)) == 2:
            if roll[i*2] + roll[i*2+1] == 10:
                score += 10
            else:
                score += max(roll[i*2], roll[i*2+1])
        elif len(str(i+1)) == 1:
            score += roll[i]
    return score