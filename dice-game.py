def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = sum(range(m+1, n+1)) * m
    for i in range(1, m+1):
        peters_win += (n - i) * 1
    return peters_win / total_outcomes