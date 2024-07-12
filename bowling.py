```
import re

def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            s1, s2 = map(int, re.split("/", frames[i * 2 : i * 2 + 2]))
            score += max(s1, 10) + max(s2, 10)
        else:
            if len(frames[i * 2 : i * 2 + 2]) == 2 and frames[i * 2 : i * 2 + 2][0] in ['X', '-']:
                s = int(frames[i * 2 : i * 2 + 2])
                score += s
            elif len(frames[i * 2 : i * 2 + 2]) == 3:
                s1, s2, s3 = map(int, frames[i * 2 : i * 2 + 3])
                score += s1 + s2
    return score