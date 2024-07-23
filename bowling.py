def get_strike_bonus(bowls, index):
    bonus = 0
    next_bowl = bowls[index + 1]
    third_bowl = bowls[index + 2]
    if next_bowl == "X":
        bonus += 10
        if third_bowl == "X":
            bonus += 10
            if bowls[index + 4] in ["X", "/"]:
                bonus += 10
            elif bowls[index + 4] != "-":
                bonus += int(bowls[index + 4])
        elif third_bowl == "/":
            bonus += 10
        elif third_bowl != "-":
            bonus += int(third_bowl)
    elif third_bowl == "/" or bowls[index + 3] == "X" or bowls[index + 3] == "/":
        bonus += 10
    elif third_bowl != "-":
        bonus += int(third_bowl)
    return bonus