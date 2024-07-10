def bowling_score(s):
    score = 0
    frame = 1
    for roll in s:
        if roll == "X":
            score += 10 + (10 - (frame < 5))
            frame += 1
        elif roll == "/":
            score += 10
            frame += 1
        else:
            score += int(roll)
            if frame < 9 and s[2:] == "".join(["X" for _ in range(3)]):
                continue
            elif frame < 9 and s[2:].count("X") >= 2:
                score -= int(roll)
            frame += 1 if roll != "X" else 0
    return score