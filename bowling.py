def get_strike_bonus(bowls, index):
    bonus = 0
    if index < len(bowls) - 1:
        next_bowl = bowls[index + 1]

        if next_bowl == "X":
            bonus += 10
            bonus += get_strike_bonus(bowls, index + 1)
        elif next_bowl != "-":
            bonus += int(next_bowl)
    
    return bonus