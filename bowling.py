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
        elif s[i] == 'X':
            score += 10 + (10 - int(s[i-1])) if frame < 9 else 25
            frame += 1
        else:
            if s[i] == '/':
                first_roll = 10 - int(s[i+1])
                score += first_roll
                frame += 1
            else:
                score += int(s[i]) + (10 - int(s[i]))
    return score