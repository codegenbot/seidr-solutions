```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1].isdigit():
                score += int(s[i]) + int(s[i+1])
                if score > 10:
                    score -= 10
                    if frame < 9:
                        score += 10
                    else:
                        score -= 10
                frame += 1
            elif s[i+1] == '/':
                score += int(s[i])
                frame += 1
        else:
            if s[i] == 'X':
                score += 30
                frame += 1
            elif s[i] == '-':
                continue
    return score