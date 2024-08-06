```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            strike = False
            if int(s[i]) == 10:
                strike = True
            elif int(s[i:i+2]) < 11:
                score += int(s[i:i+2])
                frame += 1
            else:
                score += int(s[i:i+2])
                if s[i+2].isdigit():
                    score += int(s[i+2])
                frame += 1
        elif s[i] == 'X':
            strike = True
            score += 10
            frame += 1
    while frame < 11:
        if strike:
            score += 10
            strike = False
        else:
            score += int(s[2*frame-2:2*frame])
        frame += 1
    return score