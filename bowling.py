Here is the Python solution for the given problem:

```
def bowling_score(s):
    score = 0
    frame = 1
    while s and frame <= 10:
        if s[0] == 'X':
            score += 30
            s = s[1:]
        elif s[:2] == 'XX':
            score += 20
            s = s[2:]
        else:
            if '/' in s[:3]:
                x, y = map(int, re.match(r'(\d)/(\d)', s[:3]).groups())
                score += x + y
                s = s[3:]
            else:
                score += int(s[:2])
                s = s[2:]
        frame += 1
    return score