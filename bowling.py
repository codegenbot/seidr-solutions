def calculate_spare_bonus(bowls, bowl_index):
    bonus = 10
    if bowls[bowl_index + 2] == 'X':
        bonus += 10
    elif bowls[bowl_index + 2] == '/':
        bonus += 10
    else:
        bonus += int(bowls[bowl_index + 2])

    return bonus