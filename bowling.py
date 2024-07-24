def get_strike_bonus(bowls, index):
    bonus = 10
    bonus += 10 if bowls[index + 2] == "X" else int(bowls[index + 2])
    
    if index + 3 < len(bowls):
        bonus += 10 if bowls[index + 3] == "X" else int(bowls[index + 3])
        
    return bonus