def bowling_score(s):
    score = 0
    roll = 0
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i + 1] == "/":
                score += int(s[i])
                roll = 10 - int(s[i])
            else:
                score += int(s[i : i + 2])
                roll = 10 - int(s[i : i + 2])
        elif s[i] == "X":
            score += 10
            roll = 10
    return score + max(0, min(roll, 10))