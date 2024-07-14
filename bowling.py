```
def bowling_score(s):
    score = 0
    roll_count = 1
    for c in s:
        if c == '/':
            if roll_count < 2:
                score += 10 - int(c[0])
                roll_count += 1
            else:
                score += int(c[0]) * 2
                roll_count += 1
        elif c.isdigit():
            if c == 'X':
                score += 30
                roll_count += 1
            elif c == '-':
                continue
            else:
                score += int(c)
                roll_count += 1
    return score