def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10 + get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10
            score += get_spare_bonus(bowls, bowl_index)
            bowl_index += 2
        else:
            score += get_frame_score(bowls, bowl_index)
            bowl_index += 2
        frame += 1
    return score


def get_strike_bonus(bowls, bowl_index):
    if bowls[bowl_index + 2] == "X":
        return 10 + 10
    elif bowls[bowl_index + 2] == "/":
        return 10
    else:
        return get_frame_score(bowls, bowl_index + 1)


def get_spare_bonus(bowls, bowl_index):
    if bowls[bowl_index + 2] == "X":
        return 10
    else:
        return int(bowls[bowl_index + 2])


def get_frame_score(bowls, bowl_index):
    if bowls[bowl_index] == "-":
        return 0
    elif bowls[bowl_index + 1] == "-":
        return int(bowls[bowl_index])
    else:
        return int(bowls[bowl_index]) + int(bowls[bowl_index + 1])


# Read input from user
bowls = input()
print(bowling_score(bowls))