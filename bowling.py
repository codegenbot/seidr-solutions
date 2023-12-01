def calculate_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10
            if frame < 10:
                score += get_strike_bonus(bowls, bowl_index)
                bowl_index += 1
            else:
                score += get_final_frame_bonus(bowls, bowl_index)
                break
        elif bowls[bowl_index] == '/':
            score += 10 - int(bowls[bowl_index - 1])
            if frame < 10:
                score += get_spare_bonus(bowls, bowl_index)
                bowl_index += 1
            else:
                score += get_final_frame_bonus(bowls, bowl_index)
                break
        else:
            score += int(bowls[bowl_index])
            if frame < 10:
                bowl_index += 1
            else:
                break
        
        frame += 1
    
    return score

def get_strike_bonus(bowls, bowl_index):
    bonus = 0
    if bowls[bowl_index + 1] == 'X':
        bonus += 10
        if bowls[bowl_index + 2] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[bowl_index + 2])
    else:
        bonus += int(bowls[bowl_index + 1])
        if bowls[bowl_index + 2] == '/':
            bonus += 10 - int(bowls[bowl_index + 1])
        else:
            bonus += int(bowls[bowl_index + 2])
    
    return bonus

def get_spare_bonus(bowls, bowl_index):
    bonus = 0
    if bowls[bowl_index + 1] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[bowl_index + 1])
    
    return bonus

def get_final_frame_bonus(bowls, bowl_index):
    bonus = 0
    if bowls[bowl_index] == 'X':
        bonus += 10
        if bowls[bowl_index + 1] == 'X':
            bonus += 10
            if bowls[bowl_index + 2] == 'X':
                bonus += 10
            else:
                bonus += int(bowls[bowl_index + 2])
        elif bowls[bowl_index + 1] == '/':
            bonus += 10 - int(bowls[bowl_index + 2])
        else:
            bonus += int(bowls[bowl_index + 1])
            if bowls[bowl_index + 2] == '/':
                bonus += 10 - int(bowls[bowl_index + 1])
            else:
                bonus += int(bowls[bowl_index + 2])
    elif bowls[bowl_index + 1] == '/':
        bonus += 10 - int(bowls[bowl_index])
        if bowls[bowl_index + 2] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[bowl_index + 2])
    else:
        bonus += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
    
    return bonus

bowls = input()
print(calculate_score(bowls))