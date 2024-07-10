def bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == "X":
            score += 10 + (
                10
                if bowls[i + 2] == "X"
                else (int(bowls[i + 1]) if bowls[i + 1] != "/" else 10)
            )
            i += 1
        elif bowls[i + 1] == "/":
            score += 10
            score += 10 if bowls[i + 2] == "X" else int(bowls[i + 2])
            i += 2
        else:
            score += int(bowls[i]) + (int(bowls[i + 1]) if bowls[i + 1] != "/" else 0)
            i += 2
        frame += 1
    return score


bowls = input()
print(bowling_score(bowls))