```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            first_roll = int(s[i])
            second_roll = 10 - int(s[i+1]) if s[i+1].isdigit() else 10
            if first_roll == 10:
                score += 10 + (10 if frame < 9 and ('/' in s[:i+2] or i+2 >= len(s)) else 0)
                frame += 1
            elif second_roll == 10:
                score += 10
                frame += 1
            elif first_roll + second_roll == 10:
                score += 10
                frame += 1
            else:
                score += first_roll + second_roll
                frame += (1 if i+2 < len(s) and s[i+2] != '/' else 0)
        else:
            score += 10
            frame += 1
    return score