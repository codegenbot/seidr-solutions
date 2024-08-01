```
def bowling_score(s):
    score = 0
    roll = 0
    for frame in s:
        if frame == 'X':
            score += 30
            roll += 1
        elif frame == '/':
            score += 10
            roll += 1
        else:
            strike = False
            if frame[0] == 'X' or frame[0] == '/':
                strike = True
            if strike:
                score += int(frame[1:]) + 10
            else:
                score += int(frame[0]) + int(frame[1])
            roll += 1
    return score