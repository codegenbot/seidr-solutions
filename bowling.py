```python
import re

def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', frames)]
    for i in range(0, len(roll), 2):
        if i+1 < len(roll) and roll[i] == 10:
            score += roll[i]
            score += roll[i+1] + roll[i+2] if i+2 < len(roll) else 10
        elif roll[i] + roll[i+1] >= 10:
            score += 10
        else:
            score += roll[i] + roll[i+1]
    return score