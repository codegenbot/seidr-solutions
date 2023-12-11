def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    
    for i in range(len(bowls)):
        if frame > 10:
            break
        
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                score += calculate_bonus(bowls[i+1], bowls[i+2])
            frame += 1
        elif bowls[i] == '/':
            score += 10 - frame_score
            if frame < 10:
                score += calculate_bonus(bowls[i+1])
            frame += 1
            is_spare = False
        elif bowls[i] == '-':
            frame_score = 0
        else:
            score += int(bowls[i])
            frame_score += int(bowls[i])
            
            if is_spare:
                score += int(bowls[i])
                is_spare = False
            
            if frame_score == 10:
                is_spare = True
                frame_score = 0
            
            if frame_score > 0:
                is_strike = False
        
        if not is_strike and frame_score > 0:
            frame_score -= 1
        
    return score

def calculate_bonus(bonus1, bonus2='0'):
    if bonus1 == 'X':
        bonus1 = 10
    elif bonus1 == '/':
        bonus1 = 10 - int(bonus2)
    else:
        bonus1 = int(bonus1)
    
    if bonus2 == 'X':
        bonus2 = 10
    elif bonus2 == '/':
        bonus2 = 10 - int(bonus1)
    else:
        bonus2 = int(bonus2)
    
    return bonus1 + bonus2

bowls = input()
score = calculate_score(bowls)
print(score)