def get_strike_bonus(bowls, index):
    bonus = 10

    if bowls[index + 1] == "X":
        bonus += 10
    else:
        bonus += 10 if bowls[index + 2] == "X" else (10 if bowls[index + 2] == "/" else (10 - int(bowls[index + 1])) if bowls[index + 1] != "/" else 10)

    return bonus