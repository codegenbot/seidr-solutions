def calculate_bowling_score(bowls):
    score = 0
    index = 0
    for frame in range(10):
        if bowls[index] == "X":
            score += 10 + get_strike_bonus(bowls, index)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10 + get_spare_bonus(bowls, index)
            index += 2
        else:
            score += (10 if bowls[index] == "X" else int(bowls[index])) + (
                10 if bowls[index + 1] == "X" else int(bowls[index + 1])
            )
            index += 2
    return score


def get_spare_bonus(bowls, index):
    next_bowl_value = (
        10
        if bowls[index + 2] == "X"
        else (int(bowls[index + 2]) if bowls[index + 2].isdigit() else 0)
    )
    return next_bowl_value


def get_strike_bonus(bowls, index):
    score = 0
    score += (
        10
        if bowls[index + 1] == "X"
        else (10 if bowls[index + 1] == "/" else int(bowls[index + 1]))
    )
    score += (
        10
        if bowls[index + 2] == "X"
        else (10 if bowls[index + 2] == "/" else int(bowls[index + 2]))
    )
    return score