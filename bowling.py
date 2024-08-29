```
import re
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            x1, x2 = map(int, re.split('/', frames[i]))
            if x1 == 10:
                score += x1 + int(frames[1]) if i < 9 else x1
            elif x2 == 10:
                score += x2 + int(frames[i+1]) if i < 9 else x2
            else:
                score += max(x1, x2) + (10 - i)
        else:
            score += int(frames[i])
    return score