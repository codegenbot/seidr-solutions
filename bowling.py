def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    
    for char in bowls:
        if char == 'X':
            score += 10
            if frame < 10:
                score += get_strike_bonus(bowls, bowl_index + 1)
                score += get_strike_bonus(bowls, bowl_index + 2)
            frame += 1
        elif char == '/':
            score += get_spare_bonus(bowls, bowl_index + 1)
            frame += 1
        elif char.isdigit():
            score += int(char)
            frame += 1
            
        if frame > 10:
            break
            
        bowl_index += 1
        
    return score

def get_strike_bonus(bowls, index):
    if index >= len(bowls):
        return 0
    
    if bowls[index] == 'X':
        return 10
    
    return int(bowls[index])

def get_spare_bonus(bowls, index):
    if index >= len(bowls):
        return 0
    
    if bowls[index] == 'X':
        return 10
    
    if bowls[index].isdigit():
        return int(bowls[index])
    
    return 10 - int(bowls[index-1])