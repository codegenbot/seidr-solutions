def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 1] == "X":
        bonus += 10
        if bowls[index + 2] == "X":
            bonus += 10
        else:
            if bowls[index + 3] == "/":
                bonus += 10
            elif bowls[index + 3] != "-":
                bonus += int(bowls[index + 3])
    elif bowls[index + 2] == "/":
        bonus += 10
    elif bowls[index + 2] != "-":
        bonus += int(bowls[index + 2])
    return bonus