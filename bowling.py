```
def bowling_score(s):
    score = 0
    frame = 1
    for c in s:
        if c.isdigit():
            if len(c) == 2 and c[0] != '0':
                if c[0] == 'X':
                    score += 10 + (10 - int(c[1])) * 2
                else:
                    score += int(c)
                frame += 1
            elif c[0] == 'X':
                score += 10 + 10
                frame += 1
            else:
                if c != '0':
                    score += int(c) + (10 - int(c)) * 2
                frame += 1
        elif c in '/-':
            continue
    return score