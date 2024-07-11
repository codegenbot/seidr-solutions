def get_strike_bonus(bowls, index):
    score = 0
    score += (
        10
        if bowls[index + 1] == "X" or index + 1 >= len(bowls)
        else (10 if bowls[index + 1] == "/" else int(bowls[index + 1]))
    )
    if index + 2 < len(bowls):
        score += (
            10
            if bowls[index + 2] == "X"
            else (10 if bowls[index + 2] == "/" else int(bowls[index + 2]))
        )
    return score