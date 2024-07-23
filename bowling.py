def get_strike_bonus(bowls, index):
    bonus = 0
    next_bowl = bowls[index + 1]
    third_bowl = bowls[index + 2]

    if third_bowl == "X":
        bonus += 10
        if index + 2 < len(bowls):
            if bowls[index + 2] == "X":
                bonus += 10
                if index + 3 < len(bowls):
                    bonus += int(bowls[index + 3]) if bowls[index + 3] != "-" else 0
            elif bowls[index + 3] == "/":
                bonus += 10
            elif bowls[index + 3] != "-":
                bonus += int(bowls[index + 3])

    return bonus