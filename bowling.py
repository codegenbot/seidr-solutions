def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0

    if bowl_index + 2 < len(bowls):
        next_bowl = bowls[bowl_index + 2]

        if next_bowl == "/":
            if bowl_index + 3 < len(bowls):
                bonus += 10 + int(bowls[bowl_index + 3])
        else:
            bonus += int(next_bowl)

    return bonus