def roll_dice(n, m):
    p_total = n
    c_total = m
    
    colin_rolls = [i for i in range(1, c_total + 1)]
    peter_wins = sum([1 / p_total if i < j else 0 for i, j in zip(colin_rolls, range(1, c_total + 1))])
    
    return peter_wins