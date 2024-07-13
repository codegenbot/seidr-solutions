def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m+1, n) for _ in range(m))
    return peters_win / total_outcomes