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
            score += 10 + (10 - int(s[i-1])) if frame < 9 else 10
            frame += 1
        elif s[i] == '/':
            first_roll = int(s[i-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
    return score