def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 1] == "X" and len(bowls) > index + 2:
        bonus += 10
        bonus += get_strike_bonus(bowls, index + 1)
    elif bowls[index + 1] != "-":
        bonus += int(bowls[index + 1])
    
    return bonus