def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0

    if bowls[bowl_index] == "/":
        next_bowl = bowls[bowl_index + 1]
        bonus += 10 - int(next_bowl)

        if next_bowl == "/":
            bonus += 10

    return bonus