def dice_game(n, m):
    total_outcomes = n * m
    peters_win = (sum(1 for _ in range(n-1)) * m)
    return peters_win / total_outcomes