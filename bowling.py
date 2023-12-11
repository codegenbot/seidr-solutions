def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    
    while frame <= 10:
        if bowls[bowl_index] == 'X':  # strike
            score += 10 + calculate_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index] == '/':  # spare
            score += 10 + calculate_spare_bonus(bowls, bowl_index)
            bowl_index += 2
        else:  # regular bowl
            score += calculate_regular_bowl_score(bowls, bowl_index)
            bowl_index += 1
        
        frame += 1
    
    return score
    
    
def calculate_strike_bonus(bowls, bowl_index):
    bonus = 0
    if bowl_index + 2 < len(bowls):
        bonus = calculate_regular_bowl_score(bowls, bowl_index + 1)
        if bowls[bowl_index + 2] == '/':
            bonus += 10
        elif bowls[bowl_index + 2] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[bowl_index + 2])
    return bonus
    
def calculate_spare_bonus(bowls, bowl_index):
    return calculate_regular_bowl_score(bowls, bowl_index + 2)
    
def calculate_regular_bowl_score(bowls, bowl_index):
    score = 0
    if bowls[bowl_index] == '-':
        score = 0
    else:
        score = int(bowls[bowl_index])
    return score

bowls = input().strip()
print(calculate_bowling_score(bowls))