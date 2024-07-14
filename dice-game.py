def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for _ in range(m) if _+1 < (n-1))
    return peters_win / total_outcomes