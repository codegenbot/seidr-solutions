def calculate_bowling_score(bowls):
    score = 0
    index = 0

    for frame in range(10):
        if bowls[index] == "X":
            score += 10 + get_strike_bonus(bowls, index)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10
            score += 10 if bowls[index + 2] == "X" else int(bowls[index + 2]) if bowls[index + 2].isdigit() else 0
            index += 2
        else:
            first_throw = 0 if bowls[index] == "-" else int(bowls[index])
            second_throw = 0 if bowls[index + 1] == "-" else int(bowls[index + 1])
            score += first_throw + second_throw
            index += 2

    return score

print(calculate_bowling_score("32XX7/534/X-66-1-"))