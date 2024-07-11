def get_strike_bonus(bowls, index):
    bonus = 10
    if index == 18:
        bonus += int(bowls[index + 1]) + int(bowls[index + 2])
    elif bowls[index + 1] == "X":
        bonus += 10
        if bowls[index + 2] == "X":
            bonus += 10
            if bowls[index + 3] == "X" or bowls[index + 3] == "/":
                bonus += 10
            else:
                bonus += int(bowls[index + 3])
        elif bowls[index + 3] == "/":
            bonus += 10
        else:
            bonus += int(bowls[index + 2]) + int(bowls[index + 3])
    elif bowls[index + 2] == "/":
        bonus += 10
    else:
        bonus += int(bowls[index + 1]) + int(bowls[index + 2])
    return bonus