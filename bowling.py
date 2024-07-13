```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(10):
        if s[i] == 'X':
            score += 30
            roll += 1
        elif s[i] == '/':
            score += 10 + int(s[:i].count('X')) * 10
            roll += 2
        else:
            frame = list(map(int, re.findall('\d', s[:i+1])))
            if len(frame) == 1:
                score += frame[0]
                roll += 1
            elif len(frame) == 2:
                score += sum(frame)
                roll += 1
            else:
                score += 10 + int(s[i].count('X')) * 10
                roll += 1
    return score