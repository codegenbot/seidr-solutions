```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if int(s[i]) == 10:
                score += 10 + (10 if i+1 < len(s) and s[i+1].isdigit() else 0)
                frame += 1
            elif int(s[i:i+2]) < 11:
                score += int(s[i:i+2])
                frame += 1
        elif s[i] == 'X':
            score += 10 + (int(s[i+1]) if i+1 < len(s) and s[i+1].isdigit() else 0)
            frame += 1
    return score