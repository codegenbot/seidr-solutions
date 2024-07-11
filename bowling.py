def get_strike_bonus(bowls, index):
    if index == 18:
        return 0
    score = 10
    if bowls[index + 1] == "X":
        score += 10
        if bowls[index + 2] == "X":
            score += 10
        else:
            score += int(bowls[index + 2])
    elif bowls[index + 1] == "/":
        score += 10
    else:
        score += int(bowls[index + 1])
        score += int(bowls[index + 2]) if bowls[index + 2] != "-" else 0
    return score