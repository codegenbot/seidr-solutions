def calculate_strike_bonus(bowls, index):
    bonus = 0
    if index+3 < len(bowls) and bowls[index+2] == 'X':
        bonus += 10
        if bowls[index+4] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[index+4]) if bowls[index+4] != '-' else 0
    else:
        bonus = 0
        
    return bonus