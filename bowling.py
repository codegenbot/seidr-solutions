def get_strike_bonus(bowls, index):
    bonus = 10
    if bowls[index + 1] == "/":
        bonus = 10
    elif bowls[index + 1].isdigit():
        bonus = int(bowls[index + 1])
    return bonus