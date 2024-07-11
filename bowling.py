def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index] == "X":
        if index + 2 < len(bowls):
            bonus += (
                10
                if bowls[index + 1] == "X"
                else int(bowls[index + 1]) if bowls[index + 1].isdigit() else 0
            )
            if bowls[index + 1] == "X" and (bowls[index + 2] == "X" or bowls[index + 2] == "/"):
                bonus += 10
            else:
                bonus += (
                    10
                    if bowls[index + 2] == "X"
                    else int(bowls[index + 2]) if bowls[index + 2].isdigit() else 0
                )
    return bonus