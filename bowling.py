```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(len(s)):
        if s[i] == "X":
            score += 30
            roll += 1
            if i < len(s) - 1 and s[i+1] == "/":
                score += int(s[i+2])
            elif i < len(s) - 1:
                for j in range(i + 1, min(len(s), i + 3)):
                    score += int(s[j])
        elif s[i] == "/":
            score += 10
            roll += 1
            if i < len(s) - 1 and s[i+1].isdigit():
                score += int(s[i+1])
        else:
            score += int(s[i])
            roll += 1
    return score