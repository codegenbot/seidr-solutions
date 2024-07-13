```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(len(s)):
        if s[i] == "X":
            score += 30
            roll += 1
            if i < len(s) - 1 and (s[i + 1] == "/" or s[i + 1] == "X"):
                score += int(s[i + 2])
        elif s[i] == "/":
            score += 10 + int(s[i][1])
            roll += 2
            if i < len(s) - 2 and (s[i + 1].isdigit() or s[i + 1] == "X"):
                score += int(s[i + 1])
        else:
            score += int(s[i])
            roll += 1
    return score