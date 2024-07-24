def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == "X":
            score += 10 + (
                10 - int(s[i + 1]) if frame < 9 and s[i + 3].isdigit() else 0
            )
        elif s[i] == "/":
            score += 10 - int(s[i - 1])
        else:
            score += sum([int(x) for x in s[i : i + 2]])
        frame += (s[i] == "X") or (s[i] == "/" and s[i - 1] != "X")
    return score