```
def bowling_score(s):
    score = 0
    frame = 1
    i = 0
    while i < len(s):
        if s[i].isdigit():
            first_roll = int(s[i])
            if i+1 < len(s) and s[i+1].isdigit():
                second_roll = int(s[i+1])
                if first_roll == 10:
                    score += 10 + (10 if frame < 9 else 0)
                    frame += 1
                    i += 2
                elif second_roll == 10:
                    score += 10
                    frame += 1
                    i += 2
                elif first_roll + second_roll == 10:
                    score += 10
                    frame += 1
                    i += 2
                else:
                    score += first_roll + second_roll
                    if s[i+2] != '/':
                        frame += 1
                    i += 2
            elif s[i] == 'X':
                score += 10
                frame += 1
                i += 1
            else:
                score += int(s[i]) + 10 - int(s[i+1])
                if s[i+2] != '/':
                    frame += 1
                i += 2
        else:
            if s[i] == 'X':
                score += 10
                frame += 1
                i += 1
            else:
                score += 10
                frame += 1
                i += 1
    return score