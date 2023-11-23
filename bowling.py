def calculate_spare_bonus(bowls, bowl_index):
    bonus = 10
    if bowls[bowl_index] == '/' and bowls[bowl_index + 1] == 'X':
        bonus += 10
    elif bowls[bowl_index] == '/':
        bonus += int(bowls[bowl_index + 1])
    return bonus