```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1].isdigit():
                score += int(s[i]) + int(s[i+1])
            else:
                score += int(s[i]) * 10
            if frame < 9 and (s[i] == 'X' or str(int(s[i])) in ['7', '8', '9']):
                score -= min(10 - int(s[i]), 10)
        elif s[i] == 'X':
            score += 30
        else:
            score += 10
        frame += (s[i].isdigit() and s[i+1].isdigit())
    return score