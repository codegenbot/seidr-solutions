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
                        score += 10
                    else:
                        score += 10 + max(int(s[20-2*i-1]), 10 - int(s[20-2*i-3]))
                elif s[i+1] == '/':
                    score += 10 - (10 - int(s[i]))
        else:
            score += 10
    return score