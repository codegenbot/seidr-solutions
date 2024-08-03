```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            if int(s[i]) + int(s[i+1]) == 10:
                if frame < 9:
                    score += 10
                else:
                    if s[i-1].isdigit() and s[i-1] != 'X':
                        score += 10
                    elif i > 0 and s[i-2].isdigit() and int(s[i-2]) + int(s[i-1]) == 10:
                        score += 20
            else:
                if frame < 9:
                    score += int(s[i]) + int(s[i+1])
                else:
                    if i > 0 and s[i-1].isdigit() and int(s[i-1]) + int(s[i]) == 10:
                        score += 20
        elif s[i] == 'X':
            score += 10
            frame += 1
        elif s[i] == '/':
            if i > 0 and s[i-1].isdigit():
                score += 10 - int(s[i-1])
            else:
                score += 10
    return score