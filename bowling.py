def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index] == "X":
        if bowls[index + 1] == "X":
            bonus += 10
        elif bowls[index + 1] == "/":
            bonus += 10 - int(bowls[index])
        elif bowls[index + 1] == "-":
            bonus += 0
        else:
            bonus += int(bowls[index + 1])

        if index + 2 < len(bowls):
            bonus += get_strike_bonus(bowls, index + 1)

    return bonus