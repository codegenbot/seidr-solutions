def get_strike_bonus(bowls, index):
    bonus = 0
    next_bowl = bowls[index + 1]
    third_bowl = bowls[index + 2]
    
    if next_bowl == "X":
        bonus += 10
        if third_bowl == "X":
            bonus += 10
            next_next_bowl = bowls[index + 3]
            if next_next_bowl == "X":
                bonus += 10
            elif next_next_bowl != "-":
                bonus += int(next_next_bowl)
        elif third_bowl == "/":
            bonus += 10
    elif next_bowl == "/":
        bonus += 10
        next_next_bowl = bowls[index + 2]
        if next_next_bowl == "X":
            bonus += 10
        elif next_next_bowl != "-":
            bonus += int(next_next_bowl)
    elif next_bowl != "-":
        bonus += int(next_bowl)
        
    return bonus