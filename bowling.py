```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1].isdigit():
                score += int(s[i:i+2])
            else:
                score += int(s[i])
                if s[i+1] == 'X':
                    if frame < 10:
                        score += max(10 - (frame * 2), 0)
                elif s[i+1] == '/':
                    score += 10 - (10 - int(s[i]))
        else:
            score += 10
        if s[i+1] == 'X' or (s[i].isdigit() and s[i+1] in ['/', 'X']):
            frame += 1
    return score