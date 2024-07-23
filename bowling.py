def get_strike_bonus(bowls, index):
    bonus = 0
    if index + 1 < len(bowls) and (bowls[index + 1] == "X" or bowls[index + 1] == "/" or bowls[index] == "/"):
        if bowls[index + 1] == "X":
            bonus += 10
        else:
            bonus += 10 - int(bowls[index])
        
        bonus += get_strike_bonus(bowls, index + 1)
    elif index + 1 < len(bowls) and bowls[index + 1] != "-":
        bonus += int(bowls[index + 1])
    
    return bonus