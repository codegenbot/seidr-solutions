def bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == "X":
            score += (
                10
                + (10 if i + 2 < len(bowls) else 0)
                + (10 if i + 3 < len(bowls) else 0)
            )
            i += 1
        elif bowls[i] == "/":
            score += 10 - int(bowls[i - 1]) + (10 if i + 1 < len(bowls) else 0)
        else:
            score += int(bowls[i])
        if bowls[i] != "X":
            i += 1
        if bowls[i - 1] == "/" or bowls[i - 1] == "X":
            i += 1
        frame += 1
    return score


bowls = input()
print(bowling_score(bowls))