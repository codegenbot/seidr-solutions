```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if int(s[i]) == 10:
                score += 10 + (10 if frame < 9 and s[i+2:i+4] != 'X/' else 0)
                frame += 1
            elif s[i+1].isdigit() or s[i+1] == 'X':
                score += int(s[i]) + (int(s[i]) if s[i+1] == 'X' else int(s[i+1]))
                if frame < 9:
                    score += max(10 - int(s[i]), 0)
                frame += 1
            else:
                score += 10
                frame += 1
        elif s[i] == 'X':
            score += 10 + (int(s[i+2:i+4]) if frame < 9 and s[i+2:i+4].isdigit() else 0)
            frame += 1
    return score