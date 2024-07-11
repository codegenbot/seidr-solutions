def calculate_bowling_score(bowls):
    score = 0
    index = 0
    for frame in range(10):
        if bowls[index] == "X":
            score += 10 + get_strike_bonus(bowls, index)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10
            score += int(bowls[index + 2])
            index += 2
        else:
            score += int(bowls[index]) + int(bowls[index + 1])
            index += 2
    return score


def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index] == "X":
        if index + 2 < len(bowls):
            bonus += (
                10
                if bowls[index + 1] == "X"
                else int(bowls[index + 1]) if bowls[index + 1].isdigit() else 0
            )
            if bowls[index + 1] == "X" and bowls[index + 2] == "X":
                bonus += 20
            else:
                bonus += (
                    10
                    if bowls[index + 2] == "X"
                    else int(bowls[index + 2]) if bowls[index + 2].isdigit() else 0
                )
    return bonus


print(calculate_bowling_score("32XX7/534/X-66-1-"))