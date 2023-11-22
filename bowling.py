def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0

    if bowls[bowl_index] == "/":
        if bowl_index < len(bowls) - 2:
            bonus += int(bowls[bowl_index + 1])
        bonus += 10

    return bonus