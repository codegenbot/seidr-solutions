```
import re
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', frames)]
    for i in range(0, len(roll), 2):
        if i+1 < len(roll) and i+2 < len(roll):
            if roll[i] + roll[i+1] + roll[i+2] == 30:
                score += 30
                continue
        if roll[i] + roll[i+1] > 10:
            score += 10
        else:
            score += roll[i] + roll[i+1]
    return score