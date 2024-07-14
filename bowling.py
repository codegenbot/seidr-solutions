```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            first_roll = int(s[i])
            second_roll = int(s[i+1]) if i+1 < len(s) and s[i+1].isdigit() else 10 - first_roll
            if first_roll == 10:  # strike
                score += 10 + 10 + 10
                frame += 1
            elif first_roll + second_roll == 10:  # spare
                score += 10 + 10
                frame += 1
            else:
                score += first_roll + second_roll
        else:  # X (strike) or -
            if s[i] == 'X':
                score += 10 + 10
                frame += 1
            elif s[i] == '-':
                score += 10 - int(s[i-1])
                frame += 1
    return score