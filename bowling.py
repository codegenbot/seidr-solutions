```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if int(s[i]) == 10:
                score += 10 + 10
                frame += 1
            else:
                first_roll = int(s[i])
                if i + 1 < len(s) and s[i+1].isdigit():
                    second_roll = int(s[i+1])
                    if first_roll + second_roll == 10:
                        score += 10 + 10
                        frame += 1
                    else:
                        score += first_roll + second_roll
                        frame += 1
                else:
                    score += first_roll + (10 - first_roll) if 10 - first_roll > 0 else 10
                    frame += 1
        elif s[i] == 'X':
            score += 10 + 10
            frame += 1
    return score