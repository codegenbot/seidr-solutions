def get_strike_bonus(bowls, index):
    bonus = 10
    num_bonuses = 2
    if index == 18 or index == 19:
        num_bonuses = 1
    while num_bonuses > 0 and index + 1 < len(bowls):
        if bowls[index + 1] == "X":
            bonus += 10
        elif bowls[index + 1] == "/":
            bonus += 10 - int(bowls[index])
        elif bowls[index + 2] == "-":
            pass
        else:
            bonus += int(bowls[index + 1]) + int(bowls[index + 2])
        index += 1
        if bowls[index] in "X/":
            num_bonuses -= 1
        else:
            num_bonuses = 0
    return bonus