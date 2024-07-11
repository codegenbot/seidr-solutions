def calculate_bowling_score(bowls):
    score = 0
    index = 0
    for _ in range(10):
        if bowls[index] == "X":
            bonus, index = get_strike_bonus(bowls, index)
            score += bonus
        elif bowls[index + 1] == "/":
            score += 10
            score += get_spare_bonus(bowls, index + 2)
            index += 2
        elif bowls[index] != "-":
            score += int(bowls[index]) + int(bowls[index + 1])
            index += 2

    return score


def get_spare_bonus(bowls, index):
    if bowls[index] == "X":
        return 10
    elif bowls[index] == "-":
        return 0
    else:
        return int(bowls[index])


def get_strike_bonus(bowls, index):
    bonus = 10
    if bowls[index + 1] == "X":
        bonus += 10
        if bowls[index + 2] == "X":
            bonus += 10
        else:
            bonus += int(bowls[index + 2])
    else:
        bonus += int(bowls[index + 1]) + int(bowls[index + 2])
    return bonus, index + 1