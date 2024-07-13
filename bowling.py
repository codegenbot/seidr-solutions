```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(len(s)):
        if s[i] == "X":
            score += 30
            roll += 1
            if i < len(s) - 1 and s[i+1] in ["X", "/"]:
                score += int(s[i+2].strip())
            elif i < len(s) - 1:
                score += int(s[i+1].strip())
        elif s[i] == "/":
            score += 10
            roll += 1
            if i < len(s) - 1 and s[i+1] in ["X", "/"]:
                score += int(s[i+2].strip())
        else:
            if i < len(s) - 1 and s[i+1] == "X":
                score += 10 + int(s[i+2].strip())
                roll += 2
            elif i < len(s) - 1 and s[i+1] == "/":
                score += 10 + int(s[i+2].strip().split()[0])
                roll += 2
            else:
                score += int(s[i]) + int(s[i+1].strip())
                roll += 2
    return score