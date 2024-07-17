```
def bowling_score(s):
    score = 0
    roll = 0
    for frame in s.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            a, b = map(int, frame)
            score += a + b
            roll += 1
        else:
            a, b, c = map(int, frame)
            if a + b < 10:
                score += a + b
                score += c
                roll += 1
            else:
                score += 10 + c
                roll += 1
    return score