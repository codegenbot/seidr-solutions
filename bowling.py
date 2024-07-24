def calculate_bowling_score(bowls):
    score = 0
    index = 0

    for frame in range(10):
        if bowls[index] == "X" or bowls[index] == "10":
            score += 10 + get_strike_bonus(bowls, index + 1)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10 - int(bowls[index - 1]) if bowls[index - 1].isdigit() else 0
            index += 2
        else:
            score += int(bowls[index]) if bowls[index] != "-" else 0
            score += int(bowls[index + 1]) if bowls[index + 1] != "-" else 0
            index += 2

    handle_bonus(bowls, score)

    return score