def calculate_score(bowls):
    score = 0
    frame = 0
    frame_score = [0] * 10
    i = 0
    
    while frame < 10:
        if bowls[i] == 'X':
            score += 10
            score += get_strike_bonus(bowls, i)
            i += 1
            frame_score[frame] = score
            frame += 1
        elif bowls[i] == '/':
            score += 10 - int(bowls[i-1])
            score += get_spare_bonus(bowls, i)
            i += 1
            frame_score[frame] = score
            frame += 1
        else:
            score += int(bowls[i])
            i += 1
            if i < len(bowls) and bowls[i] == '/':
                score += 10 - int(bowls[i-1])
                score += get_spare_bonus(bowls, i)
                i += 1
            frame_score[frame] = score
            frame += 1
    
    return score

def get_strike_bonus(bowls, i):
    bonus = 0
    if i+2 < len(bowls):
        if bowls[i+1] == 'X':
            bonus += 10
            if bowls[i+2] == 'X':
                bonus += 10
            else:
                bonus += int(bowls[i+2])
        else:
            bonus += int(bowls[i+1])
            if bowls[i+2] == '/':
                bonus += 10 - int(bowls[i+1])
            else:
                bonus += int(bowls[i+2])
    
    return bonus

def get_spare_bonus(bowls, i):
    bonus = 0
    if i+1 < len(bowls):
        if bowls[i+1] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[i+1])
    
    return bonus


bowls = input().strip()
print(calculate_score(bowls))