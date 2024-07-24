def get_strike_bonus(bowls, index):
    bonus = 0
    if index + 2 < len(bowls) and bowls[index + 2] == "X":
        bonus += 10
        if index + 4 < len(bowls) and bowls[index + 4] == "X":
            bonus += 10
        else:
            bonus += int(bowls[index + 4])
    else:
        bonus += int(bowls[index + 2])

    return bonus