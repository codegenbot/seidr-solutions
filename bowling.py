def calculate_score(bowls):
    score = 0
    frame = 1
    frame_index = 0
    bowls = list(bowls)
    
    while frame <= 10:
        if bowls[frame_index] == 'X':
            score += 10 + get_strike_bonus(bowls, frame_index)
            frame_index += 1
        elif bowls[frame_index + 1] == '/':
            score += 10 + get_spare_bonus(bowls, frame_index)
            frame_index += 2
        else:
            score += get_frame_score(bowls, frame_index)
            frame_index += 2
        
        frame += 1
    
    return score

def get_strike_bonus(bowls, frame_index):
    bonus = 0
    
    if bowls[frame_index + 2] == 'X':
        bonus += 10
    elif bowls[frame_index + 2] == '/':
        bonus += 10 - int(bowls[frame_index + 1])
    else:
        bonus += int(bowls[frame_index + 1]) + int(bowls[frame_index + 2])
    
    return bonus

def get_spare_bonus(bowls, frame_index):
    bonus = 0
    
    if bowls[frame_index + 2] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[frame_index + 2])
    
    return bonus

def get_frame_score(bowls, frame_index):
    return int(bowls[frame_index]) + int(bowls[frame_index + 1])

bowls = input()
print(calculate_score(bowls))