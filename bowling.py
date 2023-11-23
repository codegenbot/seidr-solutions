def calculate_spare_bonus(bowls, bowl_index):
    bonus = 10
    if bowls[bowl_index + 2] == "/":
        if bowls[bowl_index + 4] == "/":
            bonus += 10
        else:
            bonus += int(bowls[bowl_index + 4])
    else:
        bonus += int(bowls[bowl_index + 2])
    return bonus