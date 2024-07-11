def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 1] == "X":
        bonus = 10
        if bowls[index + 2] == "/":
            bonus += 10
        elif bowls[index + 2] == "-":
            bonus += 0
        else:
            bonus += int(bowls[index + 2])
    elif bowls[index + 1] == "/":
        bonus = 10
    else:
        bonus = int(bowls[index + 1]) + int(bowls[index + 2])
        if bowls[index + 2] == "-":
            bonus -= int(bowls[index + 2])
    return bonus