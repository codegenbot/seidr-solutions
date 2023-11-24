def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                score += calculate_strike_bonus(bowls, frame)
            frame += 1
            frame_score = 0
            is_strike = True
            is_spare = False
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                score += calculate_spare_bonus(bowls, frame)
            frame += 1
            frame_score = 0
            is_strike = False
            is_spare = True
        elif bowl == '-':
            frame_score += 0
        else:
            frame_score += int(bowl)
            score += int(bowl)
            
            if is_strike and frame < 10:
                score += int(bowl)
            
            if is_spare and frame < 10:
                score += int(bowl)
            
            if frame_score == 10 and frame < 10 and not is_strike:
                is_spare = True
            else:
                is_spare = False
            
            if frame_score == 0 and frame < 10:
                is_strike = True
            else:
                is_strike = False
        
        if frame == 10:
            break
    
    return score

def calculate_strike_bonus(bowls, frame):
    bonus = 0
    next_two_bowls = bowls[frame + 1:frame + 3].replace('X', '')
    for bowl in next_two_bowls:
        if bowl == '/':
            bonus += 10
        elif bowl == '-':
            bonus += 0
        else:
            bonus += int(bowl)
    return bonus

def calculate_spare_bonus(bowls, frame):
    bonus = 0
    next_bowl = bowls[frame + 1:].replace('/', '')[0]
    if next_bowl == 'X':
        bonus += 10
    elif next_bowl == '-':
        bonus += 0
    else:
        bonus += int(next_bowl)
    return bonus

bowls = input()
print(calculate_score(bowls))