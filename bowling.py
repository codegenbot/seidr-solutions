```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            strike = False
            if i+1 < len(s) and s[i+1].isdigit():
                spare = int(s[i]) + int(s[i+1])
                score += spare
                frame += 1
            else:
                strike = True
                score += 10
                frame += 1
        elif s[i] == 'X':
            score += 10
            frame += 1
            if i < len(s) - 1 and s[i+1].isdigit():
                score += int(s[i+1])
                frame += 1
        else:
            score += int(s[i])
            if i+1 < len(s):
                score += int(s[i+1])
            frame += 1
    return score