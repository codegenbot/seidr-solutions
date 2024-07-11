def calculate_bowling_score(bowls):
    score = 0
    index = 0
    for _ in range(10):
        if bowls[index] == "X":
            score += 10
            bonus, index = get_strike_bonus(bowls, index)
            score += bonus
        elif bowls[index + 1] == "/":
            score += 10
            bonus = 10 if bowls[index + 2] == "X" else int(bowls[index + 2])
            score += bonus
            index += 2
        else:
            score += int(bowls[index]) + int(bowls[index + 1])
            index += 2

    return score