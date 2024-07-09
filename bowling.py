def bowling_score(bowls):
    score = 0
    frame = 1
    rolls = list(bowls.replace("-", "0"))

    for i in range(len(rolls)):
        if rolls[i] == "X":
            score += 10
            if frame < 10:
                score += sum(
                    int(rolls[j]) for j in range(i + 1, i + 3) if rolls[j] != "/"
                )
            frame += 1
        elif rolls[i] == "/":
            score += 10 - int(rolls[i - 1])
            if frame < 10:
                score += int(rolls[i + 1])
            frame += 1
        else:
            score += int(rolls[i])
            if frame < 10 and rolls[i] != "0":
                if rolls[i] != "-":
                    if rolls[i] != "/":
                        if rolls[i - 1] != "/":
                            if rolls[i - 1] != "X":
                                frame += 1
    return score


bowls = input()
print(bowling_score(bowls))