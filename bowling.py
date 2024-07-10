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
                        if s[2*i + 2:].count('X') >= 2:
                            score += 20
                        elif s[2*i + 2:].count('/'):
                            score += 30
                        else:
                            score += 10 + int(s[2*i+1])
                    else:
                        score += 10
                elif s[i+1] == '/':
                    if frame < 10: 
                        if s[2*i + 2:].count('X') >= 1:
                            score += 15
                        else:
                            score += 10 - (10 - int(s[i]))
                    else:
                        score += 10 - (10 - int(s[i]))
        else:
            score += 10
    return score