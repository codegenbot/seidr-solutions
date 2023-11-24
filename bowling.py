def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    
    while frame <= 10:
        if bowls[i] == 'X':
            score += 10
            if i+2 < len(bowls):
                score += calculate_strike_bonus(bowls[i+1], bowls[i+2])
            frame += 1
            i += 1
        elif bowls[i] == '/':
            score += calculate_spare_bonus(bowls[i-1])
            if i+1 < len(bowls):
                score += calculate_spare_bonus(bowls[i+1])
            frame += 1
            i += 1
        else:
            score += int(bowls[i])
            frame += 1
            i += 1
            
        if frame == 10 and (bowls[i-1] == 'X' or bowls[i-1] == '/'):
            if bowls[i] == 'X':
                score += 10
                if i+2 < len(bowls):
                    score += calculate_strike_bonus(bowls[i+1], bowls[i+2])
            else:
                score += int(bowls[i])
                
        i += 1
    
    return score


def calculate_strike_bonus(bowl1, bowl2):
    if bowl1 == 'X':
        return 10
    elif bowl1 == '/':
        return 10 - int(bowl2)
    else:
        return int(bowl1) + int(bowl2)


def calculate_spare_bonus(bowl):
    if bowl == 'X':
        return 10
    else:
        return 10 - int(bowl)


bowls = input()
print(calculate_bowling_score(bowls))