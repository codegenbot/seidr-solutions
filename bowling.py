```
def bowling_score(s):
    score = 0
    roll = 0
    for i, frame in enumerate(s):
        if frame == "X":
            score += 30
            if i < 8:
                score += int(s[i+1].split("/")[1])
            elif i == 9 and s[9] != "X" and s[9] != "/":
                score += int(s[9].split("/")[0])
        elif frame == "/":
            score += 10 + int(frame[1])
            if roll < 8:
                score += int(s[i+1].split("/")[0])
        else:
            score += int(frame)
        roll += 1
    return score