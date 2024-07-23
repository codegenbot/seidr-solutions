def get_strike_bonus(bowls, index):
    bonus = 0
    next_bowl = bowls[index + 1]
    third_bowl = bowls[index + 2]

    if next_bowl == "X":
        bonus += 10
        if third_bowl == "X":
            bonus += 10
            if index + 2 < len(bowls) - 1:
                bonus += int(bowls[index + 3]) if bowls[index + 3] != "-" else 0
        elif third_bowl == "/":
            bonus += 10
        elif third_bowl != "-":
            bonus += int(third_bowl)
    elif third_bowl == "/":
        bonus += 10
    elif next_bowl != "-" and third_bowl != "-":
        bonus = int(next_bowl) + int(third_bowl)

    return bonus