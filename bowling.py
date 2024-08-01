def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i] == "X":
            score += 30
        elif s[i].isdigit():
            if len(s) > i + 1 and s[i + 1].isdigit():
                score += int(s[i]) + int(s[i + 1])
            else:
                score += int(s[i])
        else:
            if s[i] == "/":
                score += 10 - int(s[i - 1])
    return score