def calculate_spare_bonus(bowls, bowl_index):
    bonus = 10

    if bowl_index + 2 < len(bowls):
        next_bowl = bowls[bowl_index + 2]
        
        if next_bowl == "/":
            bonus += 10
        else:
            bonus += int(next_bowl)

        if len(bowls) > bowl_index + 3 and bowls[bowl_index + 3] == "/":
            bonus += 10

    return bonus