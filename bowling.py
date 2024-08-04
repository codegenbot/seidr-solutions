def bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == "X":
            score += (
                10
                + (10 if i + 1 < len(bowls) and bowls[i + 1] == "X" else 0)
                + (
                    int(bowls[i + 1])
                    if i + 1 < len(bowls) and bowls[i + 1].isdigit()
                    else 0
                )
                + (
                    int(bowls[i + 2])
                    if i + 2 < len(bowls) and bowls[i + 2].isdigit()
                    else 0
                )
            )
            i += 1
        elif bowls[i] == "/":
            score += (
                10
                - int(bowls[i - 1])
                + (
                    int(bowls[i + 1])
                    if i + 1 < len(bowls) and bowls[i + 1].isdigit()
                    else 0
                )
            )
        else:
            score += int(bowls[i])
        if bowls[i] != "X":
            i += 1
        if bowls[i - 1] == "X" or bowls[i - 1] == "/":
            frame += 1
    return score


bowls = input().strip()
print(bowling_score(bowls))