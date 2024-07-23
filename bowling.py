```
import re

def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', frames)]
    for i in range(10):
        if i < len(roll) - 1 and i < len(roll) - 2:
            if roll[i] == 10:
                score += roll[i]
                score += roll[i+1]+roll[i+2]
                i += 2
            elif roll[i] + roll[i+1] <= 10:
                score += roll[i] + roll[i+1]
            else:
                score += 10
                score += roll[i+2]
        else:
            if roll[i] == 10:
                score += roll[i]
                if i < len(roll) - 2:
                    score += roll[i+1]+roll[i+2]
            elif roll[i] + (i < len(roll) - 1 and roll[i+1]) <= 10:
                score += roll[i] + (i < len(roll) - 1 and roll[i+1])
    return score