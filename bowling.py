def get_strike_bonus(bowls, index):
    score = 10
    if bowls[index + 1] == "X":
        score += 10
        if bowls[index + 2] == "X":
            score += 10
            if bowls[index + 3] != "X":
                score += int(bowls[index + 3])
        else:
            score += int(bowls[index + 2])
            score += int(bowls[index + 3]) if bowls[index + 3] != "-" else 0
    elif bowls[index + 1] == "/":
        score += 10
    else:
        score += int(bowls[index + 1])
        score += int(bowls[index + 2]) if bowls[index + 2] != "-" else 0

    if bowls[index + 1] == "X" or bowls[index + 1] == "/":
        return score, 1
    else:
        return score, 0