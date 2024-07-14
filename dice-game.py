def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = sum(range(1, m+1)) * (n - m)
    return peters_win / total_outcomes