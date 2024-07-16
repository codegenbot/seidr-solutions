def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(m - (i + 1) + 1 for i in range(m))
    return peter_win_count / float(total_outcomes)