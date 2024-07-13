```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(len(s)):
        if s[i] == "X":
            score += 30
            roll += 1
            if i < len(s) - 1 and s[i+1] != "X" and s[i+1] != "/":
                score += int(s[i+2])
            elif i < len(s) - 2 and s[i+1] == "/" and s[i+2] != "X":
                score += int(s[i+2]) + int(s[i+3])
        elif s[i] == "/":
            score += 10
            roll += 1
            if i < len(s) - 1:
                score += int(s[i+1])
        else:
            score += int(s[i])
            roll += 1
    return score