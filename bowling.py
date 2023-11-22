def calculate_spare_bonus(bowls, bowl_index):
    bonus = 10
    if bowls[bowl_index + 2] == "X":
        bonus += 10
    else:
        bonus += int(bowls[bowl_index + 2]) if bowls[bowl_index + 2].isdigit() else 0

    return bonus


def calculate_tenth_frame_bonus(bowls, bowl_index):
    bonus = 0
    if bowls[bowl_index + 1] == "X":
        bonus += 10
        if bowls[bowl_index + 2] == "X":
            bonus += 10
        else:
            bonus += (
                int(bowls[bowl_index + 2]) if bowls[bowl_index + 2].isdigit() else 0
            )
    elif bowls[bowl_index + 1] == "/":
        bonus += 10

    return bonus