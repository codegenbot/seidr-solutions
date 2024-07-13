def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = sum(range(m+1, n))
    return peters_win / total_outcomes