```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1].isdigit():
                score += int(s[i]) + int(s[i+1])
                if score >= 10:
                    score -= 10
                    frame += 1
            else:
                score += int(s[i]) * 10
                frame += 1
        elif s[i] == 'X':
            score += 10
            frame += 1
    return score