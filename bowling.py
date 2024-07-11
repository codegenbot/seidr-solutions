def calculate_bowling_score(bowls):
    score = 0
    index = 0
    for frame in range(10):
        if bowls[index] == "X":
            score += 10 + get_strike_bonus(bowls, index)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10
            score += (
                10
                if bowls[index + 2] == "X"
                else int(bowls[index + 2]) if bowls[index + 2].isdigit() else 0
            )
            index += 2
        else:
            score += (int(bowls[index]) if bowls[index].isdigit() else 0) + (
                int(bowls[index + 1]) if bowls[index + 1].isdigit() else 0
            )
            index += 2
    return score


def get_strike_bonus(bowls, index):
    score = 0
    if bowls[index + 1] == "X":
        score += 10
    else:
        score += 10 if bowls[index + 1] == "/" else int(bowls[index + 1])
    if bowls[index + 2] == "X":
        score += 10
    else:
        score += 10 if bowls[index + 2] == "/" else int(bowls[index + 2])
    return score