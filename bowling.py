````
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.replace('/|-', '')]
    for i in range(0, len(roll), 2):
        if i+1 < len(roll) and i+2 < len(roll) and roll[i] == 10:
            score += 10 + roll[i+1]+roll[i+2]
            i += 2
        elif i+1 < len(roll) and roll[i] + roll[i+1] <= 10:
            score += roll[i] + roll[i+1]
        else:
            score += roll[i] + (10 - roll[i])
    return score
```