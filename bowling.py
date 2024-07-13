```
def bowling_score(s):
    score = 0
    roll = 0
    for i, frame in enumerate(s):
        if frame == "X":
            score += 30
            roll += 1
            if i < 8 and s[i+1] in ["X", "/"]:
                score += int(s[i+2].strip())
        elif frame == "/":
            score += 10 + int(frame[1])
            roll += 2
            if i < 8 and s[i+1] in ["X", "/"]:
                score += int(s[i+2].strip())
        else:
            score += int(frame)
            roll += 1
    return score