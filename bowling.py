def get_bonus_value(bowls, index, remaining_bonuses):
    bonus_value = 0
    if remaining_bonuses == 0:
        return 0

    next_bowl = bowls[index + 1]

    if next_bowl == "X":
        bonus_value += 10
        bonus_value += get_bonus_value(bowls, index + 1, remaining_bonuses - 1)
    elif next_bowl == "/":
        bonus_value += 10 - int(bowls[index])
    elif next_bowl != "-":
        bonus_value += int(next_bowl)

    return bonus_value

def get_strike_bonus(bowls, index):
    bonus = 0
    next_bowl = bowls[index + 1]

    if next_bowl == "X":
        bonus += 10
        bonus += get_bonus_value(bowls, index + 1, 2)
    elif next_bowl != "-":
        bonus += int(next_bowl)

    return bonus