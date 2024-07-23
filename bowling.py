def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index] == "X":
        bonus += 10
        bonus += get_strike_bonus(bowls, index + 1)
    elif index + 1 < len(bowls) and bowls[index + 1] != "-":
        bonus += int(bowls[index + 1])
    
    return bonus