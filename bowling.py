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


def calculate_bowling_score(bowls):
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == "/":
            score += 10 - int(bowls[i - 1])
        elif bowls[i] == "X":
            score += 10 + get_strike_bonus(bowls, i)
        elif bowls[i].isdigit():
            score += int(bowls[i])
    return score


print(calculate_bowling_score("32XX7/534/X-66-1-"))