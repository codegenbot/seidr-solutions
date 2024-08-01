def bowling_score(s):
    score = 0
    frame = 1
    for i in range(len(s)):
        if s[i] == "X":
            score += 30
            frame -= 1
        elif s[i] == "/":
            a, b = int(s[: i - 1].count("X")), 10 - int(s[: i - 1].count("/"))
            score += (a + b) * 10
            frame -= 1
        else:
            a = int(s[:i])
            if s[i] == "5":
                score += 15
                frame -= 1
            elif s[i] == "0":
                score += 0
                frame -= 1
    return score