def get_strike_bonus(bowls, index):
    bonus = 10
    bonus += 10 if bowls[index + 2] == "X" else (10 if bowls[index + 2] == "/" else (10 - int(bowls[index + 1]))
    
    if index + 3 <= len(bowls):
        bonus += 10 if bowls[index + 3] == "X" else (10 if bowls[index + 3] == "/" else int(bowls[index + 3]))
        
    return bonus