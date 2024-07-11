def calculate_bowling_score(bowls):
    score = 0
    index = 0
    for _ in range(10):
        if bowls[index] == "X":
            bonus, index = get_strike_bonus(bowls, index)
            score += bonus
        elif bowls[index] == "/":
            score += 10
            score += get_spare_bonus(bowls, index + 1)
            index += 2
        elif bowls[index] != "-":
            score += int(bowls[index]) + int(bowls[index + 1])
            index += 2

    return score