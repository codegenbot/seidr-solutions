```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(0, len(s), 2):
        frame = s[i:i+2]
        if frame == "X ": 
            score += 30
            roll += 1
            if i < len(s) - 1 and s[i+2].isdigit():
                score += int(s[i+2])
                roll += 1
            if i < len(s) - 2 and s[i+3].isdigit():
                score += int(s[i+3])
                roll += 1
        elif frame == "//":
            score += 20
            roll += 2
            if i < len(s) - 2:
                if s[i+3].isdigit():
                    score += int(s[i+3])
                    roll += 1
        else:
            if frame[0] == "/":
                score += 10 + int(frame[1])
                roll += 2
            else:
                score += sum(int(d) for d in frame)
                roll += 1
    return score