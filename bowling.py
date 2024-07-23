def bowling(s):
    score = 0
    frame = 1
    rolls = list(s)

    for i in range(len(rolls)):
        if rolls[i] == "X":
            score += 10
            if frame < 10:
                score += sum(
                    map(
                        lambda x: 10 if x == "X" else (int(x) if x.isdigit() else 0),
                        rolls[i + 1 : i + 3],
                    )
                )
            frame += 1
        elif rolls[i] == "/":
            score += 10 - int(rolls[i - 1])
            if frame < 10:
                score += 10 if rolls[i + 1] == "X" else int(rolls[i + 1])
            frame += 1
        elif rolls[i].isdigit():
            score += int(rolls[i])
            if frame < 10 and rolls[i] != "0" and rolls[i + 1] == "/":
                score += 10 - int(rolls[i])
            frame += 0.5

    return score