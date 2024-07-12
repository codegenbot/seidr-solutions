if rolls[i] == "/":
    score += 10 - int(rolls[i - 1])
    if frame < 10:
        if rolls[i + 1] == "X":
            score += 10
        else:
            score += int(rolls[i + 1])
    frame += 1