Here is the Python solution for the bowling problem:

```
def bowling(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            pins = int(s[i]) * 10 + int(s[i+1])
            if frame < 10:
                score += min(pins, 10)
            else:
                score += pins
            if frame == 9 and (s[i] == 'X' or s[i] == '/'):
                if i+2 < len(s) and s[i+1].isdigit() and s[i+2].isdigit():
                    score += min(int(s[i+1]) * 10 + int(s[i+2]), 10)
            frame += (pins >= 10)
        elif s[i] == 'X':
            score += 10
            if frame < 9:
                score += min(10, int(s[i+1]) * 10 + int(s[i+2]))
            frame += 1
        else:
            score += 10 + int(s[i+1]) * 10
            frame += 1
    return score