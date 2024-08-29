def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            x = int(s[i])
            if i + 1 < len(s) and s[i + 1].isdigit():
                y = int(s[i + 1])
                score += min(x, 10) + min(y, 10)
            else:
                score += min(x, 10) + 10
        elif s[i] == "X":
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif s[i] == "-":
            score += 10
        frame += 1
    return score