```
import re
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', frames)]
    for i in range(10):
        if i < len(roll) - 1 and (roll[i] == 10):
            score += roll[i]
            score += roll[i+1] + roll[i+2]
            i += 2
        elif i < len(roll) - 1 and (roll[i] + roll[i+1]) == 10:
            score += roll[i] + roll[i+1]
            i += 1
        else:
            score += roll[i]
    return score