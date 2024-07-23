```
import re
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', frames)]
    i = 0
    while i < len(roll):
        if roll[i] == 10:
            score += roll[i]
            i += 1
        elif i + 1 < len(roll):
            score += min(roll[i], 10-roll[i-1]) + roll[i]
            i += 2
        else:
            score += roll[i]
            i += 1
    return score