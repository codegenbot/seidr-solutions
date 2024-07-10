```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == 'X':
            score += 10 + (10 if i+2 < len(s) and s[i+1] != '/' else 0)
            if frame < 9:
                score += int(s[2*i+2])
            frame += 1
        elif s[i] == '/':
            first_roll = 10 - int(s[i-1])
            second_roll = int(s[i+1])
            if i > 6 and s[i-2] != 'X' and s[i-4] != 'X' and s[i-6] != 'X':
                score += max(first_roll, second_roll) + min(first_roll, second_roll)
            else:
                score += first_roll + second_roll
            frame += 1
        else:
            if i > 0 and s[i-2] == 'X' or (i > 4 and s[i-4:i] == 'XXX'):
                score += int(s[i-1])*2
            elif i > 8 and s[i-6:i] == 'XXXX':
                score += int(s[i-1])*3
            else:
                score += int(s[i-1]) + int(s[i])
            frame += 1
    return score