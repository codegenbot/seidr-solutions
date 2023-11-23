def calculate_spare_bonus(bowls, bowl_index):
    bonus = 10

    if bowl_index + 2 < len(bowls):
        next_bowl = bowls[bowl_index + 2]
        
        if next_bowl == "/":
            bonus += 10
            if bowl_index + 4 < len(bowls):
                next_next_bowl = bowls[bowl_index + 4]
                if next_next_bowl == "X":
                    bonus += 10
                else:
                    bonus += int(next_next_bowl)
        elif next_bowl == "X":
            bonus += 10
            if bowl_index + 4 < len(bowls):
                next_next_bowl = bowls[bowl_index + 4]
                if next_next_bowl == "/":
                    bonus += 10
                elif next_next_bowl.isdigit():
                    bonus += int(next_next_bowl)
        elif next_bowl.isdigit():
            bonus += int(next_bowl)

    return bonus