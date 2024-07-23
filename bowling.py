```python
import re

def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', frames)]
    for i in range(10):
        if '/' in str(i+1)+str(roll[i]):
            if '/' in str(i+2)+str(roll[i+1]) and '/' in str(i+3)+str(roll[i+2]):
                score += 30
            elif '/' in str(i+2)+str(roll[i+1]):
                score += 20 + roll[i+2]
            else:
                score += 10 + roll[i+1]+roll[i+2]
        elif '-' in str(i+1)+str(roll[i]):
            score += 10 + roll[i+1]
        else:
            score += roll[i] + roll[i+1]
    return score