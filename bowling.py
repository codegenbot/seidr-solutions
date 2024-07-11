def get_strike_bonus(bowls, index):
    bonus = 0

    if bowls[index] == "X":
        bonus += 10
        if index + 1 < len(bowls):
            if bowls[index + 1] == "X":
                bonus += 10
                if index + 2 < len(bowls):
                    bonus += (
                        10
                        if bowls[index + 2] == "X"
                        else int(bowls[index + 2]) if bowls[index + 2] != "-" else 0
                    )
            elif bowls[index + 1] == "/":
                bonus += 10
            else:
                bonus += int(bowls[index + 1]) if bowls[index + 1] != "-" else 0

    elif bowls[index] == "/":
        bonus += 10 - int(bowls[index - 1]) if index > 0 else 0

    return bonus


def calculate_bowling_score(bowls):
    score = 0
    index = 0

    for bowl in bowls:
        score += 10 if bowl == "X" else int(bowl) if bowl.isdigit() else 0
        score += get_strike_bonus(bowls, index)
        index += 1

    return score


print(calculate_bowling_score("32XX7/534/X-66-1-"))