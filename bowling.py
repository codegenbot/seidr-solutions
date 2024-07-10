def bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == "X":
            score += 10 + (
                10 if bowls[i + 2] == "X" else (int(bowls[i + 1]) + int(bowls[i + 2]))
            )
            i += 1
        elif bowls[i + 1] == "/":
            score += 10 + (10 if bowls[i + 2] == "X" else int(bowls[i + 2]))
            i += 2
        else:
            first_bowl = 0 if bowls[i] == "-" else int(bowls[i])
            second_bowl = 0 if bowls[i + 1] == "-" else int(bowls[i + 1])
            score += first_bowl + second_bowl
            i += 2
        frame += 1
    return score

bowls = input()
print(bowling_score(bowls))