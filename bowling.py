def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 2] == "X":
        bonus += 10
        if bowls[index + 3] == "X":
            bonus += 10
        else:
            if bowls[index + 3] == "-":
                bonus += 0
            else:
                bonus += int(bowls[index + 3])
    else:
        if bowls[index + 2] == "-":
            bonus += 0
        else:
            bonus += int(bowls[index + 2])
        
        if bowls[index + 3] == "-":
            bonus += 0
        else:
            bonus += int(bowls[index + 3])
    return bonus