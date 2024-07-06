```
import re
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(10):
        if '/' in s[i*2:i*2+1]:
            first, second = map(int, re.split('/',s[i*2:i*2+2]))
            if first == 10:
                score += 10 + sum(map(int,s[(i+1)*2:(i+1)*2+1]))
            else:
                score += first + second
        elif s[i*2] == 'X':
            score += 10
            roll += 10
        else:
            score += int(s[i*2])
    return score