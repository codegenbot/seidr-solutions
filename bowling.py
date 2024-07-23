def get_strike_bonus(bowls, index):
    bonus = 0
    next_bowl = bowls[index + 2]
    if next_bowl == "X":
        bonus += 10
        if bowls[index + 4] == "X" or bowls[index + 3] == "/":
            bonus += 10
        elif bowls[index + 4] != "-" and bowls[index + 4] != "/":
            bonus += int(bowls[index + 4])
    elif bowls[index + 3] == "X" or bowls[index + 3] == "/" or bowls[index + 4] == "/":
        bonus += 10
    elif bowls[index + 3] != "-" and bowls[index + 3] != "/":
        bonus += int(bowls[index + 3])
    return bonus