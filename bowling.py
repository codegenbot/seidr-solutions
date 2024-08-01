```
def bowling_score(s):
    score = 0
    frame = 1
    for char in s + ' ':
        if char.isdigit():
            if frame == 10:
                if len(s) < 2 or (s[-1] != '/'):
                    return -1
            score += int(char)
        elif char == '/':
            score -= int(s[s.index(char) - 1])
            s = s[:s.index(char)]
            frame += 1
    return score