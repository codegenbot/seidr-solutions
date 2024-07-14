def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == "X":
            score += 10 + (10 - int(s[i + 1])) if frame < 9 else 25
        elif s[i] == "/":
            score += 10 - int(s[i + 1])
        else:
            score += sum(map(int, s[i : i + 2]))
        frame += (s[i] == "X") or (s[i] == "/" and i != len(s) - 1)
    return score