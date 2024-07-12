def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10
            score += get_strike_bonus(bowls, bowl_index)
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
    bonus = 0
    if bowls[bowl_index + 2] == "X":
        bonus += 10
    else:
        bonus += get_frame_score(bowls, bowl_index + 1)
    if bowls[bowl_index + 3] == "X":
        bonus += 10
    else:
        bonus += get_frame_score(bowls, bowl_index + 2)
    return bonus


def get_spare_bonus(bowls, bowl_index):
    bonus = 0
    if bowls[bowl_index + 2] == "X":
        bonus += 10
    else:
        bonus += get_frame_score(bowls, bowl_index + 2)
    return bonus


def get_frame_score(bowls, bowl_index):
    score = 0
    if bowls[bowl_index] == "-":
        score += 0
    else:
        score += int(bowls[bowl_index])
    if bowls[bowl_index + 1] == "-":
        score += 0
    elif bowls[bowl_index + 1] == "/":
        score += 10 - int(bowls[bowl_index])
    else:
        score += int(bowls[bowl_index + 1])
    return score


bowls = input()
print(bowling_score(bowls))