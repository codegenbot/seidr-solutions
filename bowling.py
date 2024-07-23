def get_strike_bonus(bowls, index):
    bonus = 0
    if index + 2 < len(bowls):
        if bowls[index + 2] == "X":
            bonus += 10
            if index + 4 < len(bowls) and (bowls[index + 4] == "X" or bowls[index + 4] == "/"):
                bonus += 10
            elif index + 4 < len(bowls) and bowls[index + 4] != "-":
                bonus += int(bowls[index + 4])
        elif index + 3 < len(bowls) and (bowls[index + 3] == "X" or bowls[index + 3] == "/"):
            bonus += 10
        elif index + 3 < len(bowls) and bowls[index + 3] != "-":
            bonus += int(bowls[index + 3])
    return bonus