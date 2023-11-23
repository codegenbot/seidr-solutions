def calculate_spare_bonus(bowls, bowl_index):
    bonus = 10
    bonus += 10 if bowls[bowl_index + 4] == "/" else int(bowls[bowl_index + 4])
    return bonus