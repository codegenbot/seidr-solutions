def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index] == "X":
        next_bowl = bowls[index + 1]
        next_next_bowl = bowls[index + 2] if index + 2 < len(bowls) else None
        
        bonus += 10
        
        if next_bowl == "X":
            bonus += 10
            if next_next_bowl == "X":
                bonus += 10
            elif next_next_bowl == "/":
                bonus += 10 - 10
            elif next_next_bowl != "-":
                bonus += int(next_next_bowl)
        elif next_bowl == "/":
            bonus += 10 - 10
        elif next_bowl != "-":
            bonus += int(next_bowl)
        
        if next_bowl != "X" or (next_next_bowl and next_next_bowl not in ["X", "/"]):
            bonus += get_strike_bonus(bowls, index + 1)

    return bonus