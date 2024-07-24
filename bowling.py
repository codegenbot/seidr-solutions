def get_strike_bonus(bowls, index):
    bonus = 10
    
    if bowls[index + 1] == "X":
        bonus += 10
        if bowls[index + 2] == "X":
            bonus += 10
        elif bowls[index + 2] == "/":
            bonus += 10
        else:
            bonus += (10 - int(bowls[index + 2]))
    elif bowls[index + 1] == "/":
        bonus += 10
    elif bowls[index + 1].isdigit():
        bonus += int(bowls[index + 1])

    return bonus