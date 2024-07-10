def bowling_score(bowls):
    score = 0
    frame = 1
    rolls = list(bowls)

    for i in range(len(rolls)):
        if rolls[i] == "X":
            score += 10
            if frame < 10:
                score += sum(
                    map(
                        lambda x: 10 if x == "X" else (0 if x == "-" else int(x)),
                        rolls[i + 1 : i + 3],
                    )
                )
            frame += 1
        elif rolls[i] == "/":
            score += 10 - int(rolls[i - 1])
            if frame < 10:
                score += int(rolls[i + 1])
            frame += 1
        elif rolls[i] == "-":
            pass
        else:
            score += int(rolls[i])
            if frame < 10 and i < len(rolls) - 1 and rolls[i + 1] == "/":
                score += 10 - int(rolls[i])
            frame += 1

    return score


bowls = input()
print(bowling_score(bowls))