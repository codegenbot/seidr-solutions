def calculate_bowling_score(bowls):
    score = 0
    index = 0

    for frame in range(10):
        if bowls[index] == "X":
            score += 10 + get_strike_bonus(bowls, index + 1)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10
        else:
            if bowls[index] != "-":
                score += int(bowls[index])
            if bowls[index + 1] != "-":
                score += int(bowls[index + 1])
            if bowls[index + 1] == "/":
                score += get_spare_bonus(bowls, index + 2)

        index += 2

    if bowls[-3:] == "XXX":
        score += 30
    elif bowls[-2:] == "XX":
        score += 20
    elif bowls[-1] == "X":
        score += 10

    return score