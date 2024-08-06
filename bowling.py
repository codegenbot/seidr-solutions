```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1].isdigit():
                score += int(s[i:i+2]) * (10 - frame)
            else:
                score += int(s[i])
                if s[i+1] == 'X':
                    score += 10
                else:
                    score += 10 - int(s[i+1])
        elif s[i] == 'X':
            score += 10
            if frame < 9:
                if s[2*i+2].isdigit():
                    score += int(s[2*i+2]) * (10 - frame)
                else:
                    score += 10 - int(s[2*i+1])
        elif s[i] == '/':
            first_roll = int(s[:i])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        frame += 1
    return score