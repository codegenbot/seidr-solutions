def get_strike_bonus(bowls, index):
    bonus = 10

    if bowls[index] == "X":
        bonus += 10
        if index + 1 < len(bowls):
            if bowls[index + 1] == "X":
                bonus += 10
                if index + 2 < len(bowls):
                    bonus += 10 if bowls[index + 2] == "X" or bowls[index + 2] == "/" else (10 - int(bowls[index + 2]))
            elif bowls[index + 1] == "/":
                bonus += 10
            else:
                bonus += (10 - int(bowls[index + 1]))
            index += 1
    return bonus