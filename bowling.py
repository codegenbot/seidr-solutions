def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0

    if bowl_index + 2 < len(bowls):
        next_bowl = bowls[bowl_index + 2]
        
        if next_bowl == "/":
            if bowl_index + 3 < len(bowls):
                bonus += 10
        elif next_bowl == "X" and bowl_index + 4 < len(bowls):
            bonus += 10
            next_next_bowl = bowls[bowl_index + 4]
            if next_next_bowl == "/":
                if bowl_index + 5 < len(bowls):
                    bonus += 10
            else:
                bonus += int(next_next_bowl)
        else:
            bonus += int(next_bowl)

    return bonus