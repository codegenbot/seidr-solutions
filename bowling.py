def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0
    if bowl_index + 1 < len(bowls):
        next_bowl = bowls[bowl_index + 1]
        if next_bowl == "/":
            bonus += 10
            if bowl_index + 2 < len(bowls):
                bonus += int(bowls[bowl_index + 2])
        else:
            bonus += int(next_bowl)
    return bonus