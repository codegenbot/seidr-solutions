def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    bowl_index = 0
    
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10
            score += calculate_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index+1] == '/':
            score += 10
            score += calculate_spare_bonus(bowls, bowl_index)
            bowl_index += 2
        else:
            score += int(bowls[bowl_index])
            score += int(bowls[bowl_index+1])
            bowl_index += 2
        
        frame += 1
    
    return score

def calculate_strike_bonus(bowls, bowl_index):
    bonus = 0
    
    if bowls[bowl_index+2] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[bowl_index+2])
    
    if bowls[bowl_index+3] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[bowl_index+3])
    
    return bonus

def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0
    
    if bowls[bowl_index+2] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[bowl_index+2])
    
    return bonus

bowls = input()
score = calculate_score(bowls)
print(score)