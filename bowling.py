```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1] == '/':
                first_roll = int(s[i])
                second_roll = 10 - first_roll
                if first_roll + second_roll >= 10:
                    score += 10 + (frame > 1)
                else:
                    score += first_roll + second_roll + (frame > 1)
            else:
                score += int(s[i]) * 2
        elif s[i] == 'X':
            score += 30
            frame -= 1
        else:
            if s[i+1].isdigit():
                score += int(s[i:i+2])
            else:
                score += 10
    return score