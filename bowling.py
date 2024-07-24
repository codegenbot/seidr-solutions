def calculate_bowling_score(bowls):
    score = 0
    index = 0

    for frame in range(10):
        if bowls[index] == "X" or bowls[index] == "10":
            score += 10 + get_strike_bonus(bowls, index + 1)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10
        else:
            score += int(bowls[index]) if bowls[index] != "-" else 0
            score += int(bowls[index + 1]) if bowls[index + 1] != "-" else 0

        index += 2

    if len(bowls) >= 3 and bowls[-3:] == "XXX":
        score += 30
    if len(bowls) >= 2 and bowls[-2:] == "XX":
        score += 20
    if len(bowls) >= 1 and bowls[-1] == "X":
        score += 10

    return score

def get_strike_bonus(bowls, index):
    bonus = 0

    if bowls[index] == "X":
        bonus += 10
        if bowls[index + 1] == "X":
            bonus += 10
            if bowls[index + 2] == "X":
                bonus += 10
            else:
                bonus += int(bowls[index + 2])
        else:
            bonus += int(bowls[index + 1])
    else:
        bonus += int(bowls[index])

    return bonus