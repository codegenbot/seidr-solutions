```
def bowling_score(s):
    score = 0
    frame = 1
    i = 0
    while i < len(s):
        if s[i] == 'X':
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
            i += 1
        elif s[i] in ['/']:
            first_roll = int(s[i-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
            i += 2
        else:
            first_roll = int(s[i])
            if i < len(s) - 1 and s[i+1] == 'X':
                score += 10 + first_roll
                frame += 1
                i += 2
            elif i < len(s) - 1 and s[i+1] in ['/']:
                score += first_roll + (10 - first_roll)
                frame += 1
                i += 2
            else:
                if i < len(s) - 1 and s[i+1] == 'X':
                    score += 10 + first_roll
                    frame += 1
                    i += 2
                elif i < len(s) - 1 and s[i+1] in ['/']:
                    score += first_roll + (10 - first_roll)
                    frame += 1
                    i += 2
                else:
                    score += first_roll + int(s[i+1])
                    frame += 1
                    i += 2
    return score