def dice_game(n, m):
    peter_max = n
    colin_max = m
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(1, colin_max+1) for j in range(colin_max+1, peter_max+1))
    return peter_win_count / total_outcomes