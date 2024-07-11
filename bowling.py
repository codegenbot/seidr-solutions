def get_strike_bonus(bowls, index):
    if bowls[index + 1] == "X":
        if bowls[index + 2] == "X":
            return 20
        elif bowls[index + 3] == "/":
            return 20
        else:
            return 10 + int(bowls[index + 2]) + int(bowls[index + 3])
    elif bowls[index + 1] == "/":
        return 10
    else:
        return int(bowls[index + 1]) + int(bowls[index + 2])