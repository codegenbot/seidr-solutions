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
        elif s[i] == 'X':
            score += 10
            frame -= 1
        else:
            if s[i] == '/':
                score += 10 - int(s[i-1])
            else:
                score += 10 - int(s[i-1])
    return score