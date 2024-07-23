def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 2] == "X":
        bonus += 10
        if bowls[index + 3] == "X":
            bonus += 10
            if bowls[index + 4] == "X" or bowls[index + 4] == "/":
                bonus += 10
            elif bowls[index + 4] != "-":
                bonus += int(bowls[index + 4])
        elif bowls[index + 3] == "/":
            bonus += 10
        elif bowls[index + 3] != "-":
            bonus += int(bowls[index + 3])
    elif bowls[index + 2] == "X" or bowls[index + 3] == "/" or bowls[index + 4] == "/":
        bonus += 10
    elif bowls[index + 3] != "-":
        bonus += int(bowls[index + 3])
    return bonus