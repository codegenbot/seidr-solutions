```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == 'X':
            score += 10 + (10 if frame < 9 and s[i+2:i+4] != '//' else 0)
            frame += 1
        elif s[i] == '/':
            first_roll = 10 - int(s[i+1])
            if frame < 9:
                second_roll = int(s[i+2:i+4][0])
                score += first_roll + second_roll
            else:
                score += first_roll
            frame += 1
        else:
            first_roll = int(s[i])
            second_roll = int(s[i+1])
            if frame < 9 and s[i+2] == 'X':
                score += first_roll + 10
                frame += 1
            elif frame < 9:
                score += first_roll + second_roll
                frame += 1
            else:
                score += first_roll + second_roll
    return score