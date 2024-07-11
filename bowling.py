def get_strike_bonus(bowls, index):
    bonus = 10
    if bowls[index + 1] == "X":
        if index == 18:
            bonus += 10
        else:
            bonus += get_strike_bonus(bowls, index + 1)
    elif bowls[index + 1] == "/":
        bonus += 10
    else:
        bonus += int(bowls[index + 1]) + int(bowls[index + 2])
    return bonus