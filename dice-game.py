def dice_game(n, m):
    total_combinations = n * m
    peters_win_conditions = (n - 1) * m + n * (m - 1)
    return peters_win_conditions / total_combinations