def get_strike_bonus(bowls, index):
    score = 10
    bonus_bowls = 2

    if index + bonus_bowls >= len(bowls):
        return score, 0

    for i in range(bonus_bowls):
        if bowls[index + i + 1] == "X":
            score += 10
        elif bowls[index + i + 1] == "/":
            score = 10 + 10 - int(bowls[index + i])
        else:
            score += int(bowls[index + i + 1])

    return score, bonus_bowls