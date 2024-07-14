```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            if int(s[i:i+2]) == 10:
                score += 10 + (10 - min(int(s[j:j+2]) for j in range(i+2, i+12) if s[j].isdigit())) if frame < 9 else 0
                frame += 1
            else:
                score += int(s[i:i+2])
                frame += 1
        elif s[i] == 'X':
            score += 10 + (10 - min(int(s[j:j+2]) for j in range(i+1, i+11) if s[j].isdigit())) if frame < 9 else 0
            frame += 1
        else:
            if s[i] == '/':
                score += 10 - int(s[i-1])
                frame += 1
    return score