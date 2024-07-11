def get_strike_bonus(bowls, index):
    bonus = 10
    num_bonuses = 2
    if index == 18:
        num_bonuses = 1
    while num_bonuses > 0 and index + 1 < len(bowls):
        if bowls[index + 1] == "X" or bowls[index + 2] == "/":
            bonus += 10
        elif bowls[index + 2] == "-":
            pass
        else:
            bonus += int(bowls[index + 1]) + int(bowls[index + 2])
        index += 1
        num_bonuses -= 1
    return bonus