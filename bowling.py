def get_strike_bonus(bowls, index):
    if index == 18:
        return 20 if bowls[19] == "X" else 10 + int(bowls[19])
    
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
    elif third_bowl == "/":
        bonus += 10
    elif bowls[index + 3] == "X" or bowls[index + 3] == "/":
        bonus += 10
    elif third_bowl != "-":
        bonus += int(third_bowl)
    return bonus