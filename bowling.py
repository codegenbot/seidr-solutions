def calculate_score(bowls: str) -> int:
    score = 0
    frame = 1
    bowl_index = 0
    
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10 + get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index+1] == '/':
            score += 10 + get_spare_bonus(bowls, bowl_index)
            bowl_index += 2
        else:
            score += get_frame_score(bowls, bowl_index)
            bowl_index += 2
        frame += 1
    
    return score

def get_strike_bonus(bowls: str, bowl_index: int) -> int:
    bonus = 0
    if bowls[bowl_index+1] == 'X':
        bonus += 10
        if bowls[bowl_index+2] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[bowl_index+2])
    else:
        bonus += int(bowls[bowl_index+1]) + int(bowls[bowl_index+2])
    return bonus

def get_spare_bonus(bowls: str, bowl_index: int) -> int:
    return int(bowls[bowl_index+2])

def get_frame_score(bowls: str, bowl_index: int) -> int:
    return int(bowls[bowl_index]) + int(bowls[bowl_index+1])

bowls = input().strip()
score = calculate_score(bowls)
print(score)