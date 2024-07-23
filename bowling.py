def get_strike_bonus(bowls, index):
    bonus = 0
    next_bowl = bowls[index + 1]

    if next_bowl == "X":
        bonus += 10
        if index + 1 < len(bowls) - 1:
            if bowls[index + 1] == "X":
                bonus += 10
            elif bowls[index + 1] == "/":
                bonus += 10
            elif bowls[index + 1] != "-":
                bonus += int(bowls[index + 1])

    return bonus