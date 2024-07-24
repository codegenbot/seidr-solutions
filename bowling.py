def get_strike_bonus(bowls, index):
    bonus = 10
    bonus += 10 if bowls[index + 2] == "X" else int(bowls[index + 2])
    
    if bowls[index + 3] == "/":
        bonus += 10
    else:
        bonus += int(bowls[index + 3])
        
    return bonus