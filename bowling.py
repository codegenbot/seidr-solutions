def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 1] == "X" and index + 1 < len(bowls):
        bonus = 10
        if bowls[index + 2] == "X" and index + 2 < len(bowls):
            bonus += 10
            if bowls[index + 3] == "X" and index + 3 < len(bowls):
                bonus += 10
            else:
                bonus += int(bowls[index + 3])
        elif bowls[index + 2] == "/":
            bonus += 10
        else:
            bonus += int(bowls[index + 2])
    elif bowls[index + 1] == "/" and index + 1 < len(bowls):
        bonus = 10
    else:
        if bowls[index + 2] == "-" and index + 2 < len(bowls):
            bonus = int(bowls[index + 1])
        else:
            bonus = int(bowls[index + 1]) + int(bowls[index + 2])
    return bonus