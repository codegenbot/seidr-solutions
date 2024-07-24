def get_strike_bonus(bowls, index):
    bonus = 0
    if index + 2 < len(bowls) and bowls[index + 2] == "X":
        bonus += 10
    else:
        bonus += int(bowls[index + 2])
    if index + 3 < len(bowls) and bowls[index + 3] == "X":
        bonus += 10
    else:
        bonus += int(bowls[index + 3])
    return bonus