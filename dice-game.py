def dice_game(n, m):
    total_outcomes = n * m
    peters_win_count = sum(min(i + 1, n) for i in range(m))
    return peters_win_count / total_outcomes