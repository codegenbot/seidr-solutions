```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1].isdigit():
                score += int(s[i:i+2])
            else:
                score += int(s[i])
                if s[i+1] == 'X':
                    if frame < 10:
                        score += max(10 - frame, 0) + 10
                    else:
                        score += 10
                elif s[i+1] == '/':
                    score += 10 - (10 - int(s[i]))
        else:
            score += 10
        if i > 17 and s[i] == 'X' and s[i+1].isdigit():
            score -= int(s[i+1])
        frame = min(frame + (s[i:i+2] != 'X/'), 10)
    return score