```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(len(s)):
        if s[i] == "X":
            if i < 8:
                score += 30 + int(s[i+1].split("/")[1]) + int(s[i+2].split("/")[1])
            else:
                score += 30
            roll += 1
        elif s[i] == "/":
            if i < 8 and s[i+1] != "X":
                score += 10 + int(s[i+1].split("/")[0]) + int(s[i+2].split("/")[1])
            else:
                score += 10 + int(s[i+1].split("/")[0])
            roll += 2
        else:
            if len(s[i]) == 2 and s[i][1] == "/":
                score += 10 + int(s[i][0])
                roll += 2
            else:
                score += int(s[i])
                roll += 1
    return score