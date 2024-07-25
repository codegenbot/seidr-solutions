```
def bowling_score(s):
    score = 0
    frame = 1
    for c in s:
        if c.isdigit():
            if len(c) == 1:
                if int(c) < 10:
                    score += int(c)
                else:
                    score += 10
                    frame -= 1
            else:
                if int(c) > 9 and int(c) < 11:
                    score += 10
                    frame -= 1
                else:
                    score += int(c)
        elif c == '/':
            score += 10
            frame -= 1
        elif c == 'X':
            score += 30
            frame -= 1
        elif c == '-':
            continue
    return score