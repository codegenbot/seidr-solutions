def get_strike_bonus(bowls, index):
    bonus = 10
    if bowls[index + 1] == "X":
        if bowls[index + 2] == "X":
            bonus += 20
            if bowls[index + 3] == "X":
                bonus += 10
            else:
                bonus += int(bowls[index + 3])
        else:
            bonus += 10 + int(bowls[index + 2])
    elif bowls[index + 1] == "/":
        bonus += 10
    else:
        bonus += int(bowls[index + 1]) + int(bowls[index + 2])
    return bonus