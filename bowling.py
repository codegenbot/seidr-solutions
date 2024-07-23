def get_strike_bonus(bowls, index):
    bonus = 0
    if index + 2 < len(bowls) and (bowls[index + 1] == "X" or bowls[index + 1] == "/") and index + 2 < len(bowls):
        if bowls[index + 1] == "X":
            bonus += 10
        else:
            bonus += 10 - int(bowls[index])
        
        bonus += get_strike_bonus(bowls, index + 1)
    elif index + 2 < len(bowls) and bowls[index + 1] != "-":
        bonus += int(bowls[index + 1])
    
    return bonus