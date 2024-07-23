def get_strike_bonus(bowls, index):
    bonus = 0
    next_bowl = bowls[index + 1]
    third_bowl = bowls[index + 2]

    if next_bowl == "X":
        bonus += 10
        if index + 2 < len(bowls):
            if bowls[index + 1] == "X":
                bonus += 10
                if index + 3 < len(bowls):
                    bonus += int(bowls[index + 3]) if bowls[index + 3] != "-" else 0
            elif bowls[index + 2] == "/":
                bonus += 10
            elif bowls[index + 2] != "-":
                bonus += int(bowls[index + 2])

    return bonus