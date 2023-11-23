def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0

    try:
        next_bowl = bowls[bowl_index + 1]

        if next_bowl == "/":
            bonus += 10
            bonus += int(bowls[bowl_index + 2])
        elif next_bowl == "X":
            bonus += 10
            bonus += int(bowls[bowl_index + 2])
            next_next_bowl = bowls[bowl_index + 3]
            if next_next_bowl == "/":
                bonus += 10
            else:
                bonus += int(next_next_bowl)
        else:
            bonus += int(next_bowl)
    except IndexError:
        pass

    return bonus