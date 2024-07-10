def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")
    bowls += "--"

    for i in range(len(bowls)):
        if bowls[i] == "X":
            score += 10
            if i < 19:
                score += 10 if bowls[i + 1] == "X" else int(bowls[i + 1]) if bowls[i + 1] != "-" else 0
                score += 10 if bowls[i + 2] == "X" else int(bowls[i + 2]) if bowls[i + 2] != "-" else 0
        elif bowls[i] == "/":
            score += 10 - int(bowls[i-1])
        else:
            score += int(bowls[i]) if bowls[i] != "-" else 0

    return score