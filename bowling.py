def get_strike_bonus(bowls, index):
    bonus = 10
    if index == 18:
        if bowls[index + 1] == "X":
            if bowls[index + 2] == "X":
                bonus += 20
            else:
                bonus += 10 + (10 if bowls[index + 2] == "/" else int(bowls[index + 2]))
        elif bowls[index + 1] == "/":
            bonus += 10
        else:
            bonus += int(bowls[index + 1]) + int(bowls[index + 2])
    else:
        # Rest of the logic remains the same
        pass
    return bonus