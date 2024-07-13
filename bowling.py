```
def bowling_score(s):
    score = 0
    roll = 0
    for frame in s:
        if frame == 'X':
            score += 30
            roll += 1
        elif frame == '/':
            score += 10 + int(frame[1])
            roll += 1
        else:
            score += int(frame)
            roll += 1
    return score