def get_strike_bonus(bowls, index):
    bonus = 0
    next_bowl = bowls[index + 1]

    if next_bowl == "X":
        bonus += 10
        bonus += get_bonus_value(bowls, index + 1, 2)
    elif next_bowl != "-":
        bonus += int(next_bowl)
    
    return bonus

def get_bonus_value(bowls, index, num):
    bonus = 0
    for i in range(num):
        if bowls[index + i] == "X":
            bonus += 10
        elif bowls[index + i] == "/":
            bonus += 10
        elif bowls[index + i] != "-":
            bonus += int(bowls[index + i])

    return bonus