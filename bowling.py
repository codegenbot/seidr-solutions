```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            strike = False
            if i < len(s) - 1 and s[i+1] == 'X':
                strike = True
            else:
                a = int(s[i])
                b = int(s[i+1]) if i + 1 < len(s) else 0
                score += min(a, 10) + min(b, 10)
                if not strike and (a + b) < 10:
                    frame += 1
        elif s[i] == 'X':
            score += 10
            frame += 1
    return score