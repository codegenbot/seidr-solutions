```
def bowling_score(s):
    score = 0
    frame = 1
    for c in s:
        if c == 'X':
            score += 30
            frame += 1
        elif c == '/':
            score += 10
            frame += 1
        else:
            strike = False
            if c == '-':
                strike = True
            for d in [c, s[s.index(c)+1]]:
                if d.isdigit():
                    score += int(d)
                    if not strike:
                        frame += 1
                elif d == 'X' and not strike:
                    score += 30
                    frame += 1
                    break
                elif d == '/':
                    score += 10
                    frame += 1
                    break
    return score