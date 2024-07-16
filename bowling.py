```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == 'X':
            if frame < 10:
                score += 30
            else:
                score += 10
        elif s[i] == '/':
            first_bowl = int(s[i-1]) * 10 + int(s[i+1])
            score += first_bowl
            frame += 1
        else:
            if frame < 10:
                score += int(s[i-1]) * 10 + int(s[i])
            else:
                score += int(s[i-1]) * 10 + 10
            frame += 1
    return score