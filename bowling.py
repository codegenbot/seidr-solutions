```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(len(s)):
        if s[i] == "X":
            if i < len(s) - 1 and s[i+1] == "/":
                score += 30
                roll += 2
            elif i < len(s) - 1:
                score += 10 + int(s[i+1][0])
                roll += 2
            else:
                score += 10
                roll += 1
        elif s[i] == "/":
            if i < len(s) - 1 and s[i+1] == "X":
                score += 20
                roll += 3
            else:
                score += 10 + int(s[i+1][0])
                roll += 2
        else:
            if len(s[i]) > 1:
                score += 10 + int(s[i][0])
                roll += 2
            else:
                score += int(s[i])
                roll += 1
    return score