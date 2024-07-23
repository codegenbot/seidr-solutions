def get_strike_bonus(bowls, index):
    bonus = 0
    if index + 1 < len(bowls):
        if bowls[index + 1] == "X":
            bonus += 10
            bonus += get_strike_bonus(bowls, index + 1)
        elif bowls[index + 1] != "-":
            bonus += int(bowls[index + 1])
    
    return bonus