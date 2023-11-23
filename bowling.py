def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0

    if bowls[bowl_index] == "/":
        bonus += 10

        next_bowl = bowls[bowl_index + 1]
        if next_bowl.isdigit():
            bonus += int(next_bowl)
    return bonus