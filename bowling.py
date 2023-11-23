def calculate_spare_bonus(bowls, bowl_index):
    bonus = 10

    if bowl_index + 2 < len(bowls):
        next_bowl = bowls[bowl_index + 2]
        
        if next_bowl == "/":
            bonus += 10
        elif next_bowl == "X":
            bonus += 10
            if bowl_index + 4 < len(bowls) and bowls[bowl_index + 4] == "/":
                bonus += 10
            elif bowl_index + 4 < len(bowls):
                bonus += int(bowls[bowl_index + 4])
        else:
            bonus += int(next_bowl)

    return bonus