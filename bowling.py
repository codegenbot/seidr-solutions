def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10
            if frame < 10:
                score += get_strike_bonus(bowls, bowl_index + 1)
                bowl_index += 1
            elif frame == 10:
                score += get_strike_bonus(bowls, bowl_index + 1, 2)
                bowl_index += 1
        elif bowls[bowl_index] == '/':
            score += 10 - int(bowls[bowl_index - 1])
            if frame < 10:
                score += get_spare_bonus(bowls, bowl_index + 1)
                bowl_index += 1
            elif frame == 10:
                score += get_spare_bonus(bowls, bowl_index + 1, 1)
                bowl_index += 1
        else:
            score += int(bowls[bowl_index])
        bowl_index += 1
        frame += 1
    return score

def get_strike_bonus(bowls, bowl_index, bonus_count=1):
    bonus_score = 0
    while bonus_count > 0:
        if bowls[bowl_index] == 'X':
            bonus_score += 10
        elif bowls[bowl_index] == '/':
            bonus_score += 10 - int(bowls[bowl_index - 1])
        else:
            bonus_score += int(bowls[bowl_index])
        bowl_index += 1
        bonus_count -= 1
    return bonus_score

def get_spare_bonus(bowls, bowl_index, bonus_count=1):
    bonus_score = 0
    while bonus_count > 0:
        if bowls[bowl_index] == 'X':
            bonus_score += 10
        else:
            bonus_score += int(bowls[bowl_index])
        bowl_index += 1
        bonus_count -= 1
    return bonus_score

bowls = input()
print(calculate_bowling_score(bowls))