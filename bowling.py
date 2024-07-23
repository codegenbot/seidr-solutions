def get_strike_bonus(bowls, index):
    bonus = 10
    for i in range(index + 1, index + 4):
        if bowls[i] == "X":
            bonus += 10
        elif bowls[i] == "/":
            bonus += 10 - int(bowls[i-1])
        elif bowls[i] != "-":
            bonus += int(bowls[i])
    return bonus