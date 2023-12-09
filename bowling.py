def calculate_score(bowls):
    score = 0
    frame = 1
    i = 0
    
    while frame <= 10:
        if bowls[i] == 'X':
            score += 10
            score += calculate_strike_bonus(bowls, i)
            i += 1
        elif bowls[i+1] == '/':
            score += 10
            score += calculate_spare_bonus(bowls, i)
            i += 2
        else:
            score += calculate_frame_score(bowls, i)
            i += 2
            
        frame += 1
        
    return score


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


def calculate_spare_bonus(bowls, index):
    bonus = 0
    if bowls[index+2] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[index+2]) if bowls[index+2] != '-' else 0
        
    return bonus


def calculate_frame_score(bowls, index):
    return int(bowls[index]) if bowls[index] != '-' else 0 + int(bowls[index+1]) if bowls[index+1] != '-' else 0


bowls = input().strip()
print(calculate_score(bowls))