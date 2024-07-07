```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(len(s)):
        if s[i] == 'X': # strike
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif s[i] == '/':
            score += 10
            frame += 1
        elif s[i].isdigit():
            count = int(s[i])
            if i+2 <= len(s) and s[i+1:i+3] == 'X' or s[i+1:i+3] == '//': # spare
                score += 10 + count
                frame += 1
            else:
                score += count
    return score