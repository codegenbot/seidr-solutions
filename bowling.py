def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index] == "X":
        if index == len(bowls) - 3 and bowls[-1] == "X":
            bonus += 10
        elif index == len(bowls) - 2 and (bowls[-1] == "X" or bowls[-1] == "/"):
            bonus += 10
        else:
            if bowls[index + 1] == "X":
                bonus += 10
            elif bowls[index + 1] == "/":
                bonus += 10 - int(bowls[index])
            elif bowls[index + 1] != "-":
                bonus += int(bowls[index + 1])
            
            if index + 2 < len(bowls) and (bowls[index + 1] != "X" or (bowls[index + 2] != "-" and bowls[index + 2] != "X")):
                bonus += get_strike_bonus(bowls, index + 2)
    return bonus