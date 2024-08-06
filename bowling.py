```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            if int(s[i]) == 10:
                score += 10 + (10 - int(s[i])) * frame
                frame += 1
            else:
                score += int(s[i]) + int(s[i+1])
                frame += 1
        elif s[i] == 'X':
            score += 10 + 10 * frame
            frame += 1
        elif s[i] == '/':
            score += 10 - int(s[i+1]) + 10 * frame
            frame += 1
    return score