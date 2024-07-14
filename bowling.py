```
def bowling_score(s):
    score = 0
    frame = 1
    for c in s:
        if c.isdigit():
            strike = False
            if len(s) > frame and s[frame] == 'X':
                strike = True
            if c == 'X' or (strike and len(s) > frame + 1 and s[frame+1].isdigit()):
                score += 10 + 10 if c == 'X' else int(c)
                frame += 1
            elif c != 'X' and c.isdigit() and len(s) > frame + 1:
                score += int(c) + int(s[frame+1])
                frame += 2
        else:
            if c == '/':
                score += 10
                frame += 1
    return score