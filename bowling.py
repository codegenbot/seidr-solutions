def bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == "X":
            score += 10 + bonus(bowls, i + 1)
            i += 1
        elif bowls[i] == "/":
            score += 10 - int(bowls[i - 1]) + bonus(bowls, i + 1)
        elif bowls[i] == "-":
            score += 0
        else:
            score += int(bowls[i])
        i += 1
        if bowls[i - 1] == "X" or bowls[i - 1] == "/":
            frame += 1
    return score