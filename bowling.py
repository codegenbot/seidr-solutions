def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10
            if frame < 10:
                score += get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index] == '/':
            score += 10 - int(bowls[bowl_index - 1])
            if frame < 10:
                score += get_spare_bonus(bowls, bowl_index)
            bowl_index += 1
        else:
            score += int(bowls[bowl_index])
            bowl_index += 1
            
            if bowls[bowl_index] == '/':
                score += 10 - int(bowls[bowl_index - 1])
                if frame < 10:
                    score += get_spare_bonus(bowls, bowl_index)
            else:
                score += int(bowls[bowl_index])
                
            bowl_index += 1
        
        frame += 1
    
    return score

def get_strike_bonus(bowls, bowl_index):
    bonus = 0
    bonus_index = bowl_index + 1
    
    while bonus < 2:
        if bowls[bonus_index] == 'X':
            bonus += 1
        else:
            bonus += int(bowls[bonus_index])
        
        bonus_index += 1
    
    return bonus

def get_spare_bonus(bowls, bowl_index):
    bonus = 0
    bonus_index = bowl_index + 1
    
    if bowls[bonus_index] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[bonus_index])
    
    return bonus