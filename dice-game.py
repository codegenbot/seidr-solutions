def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = total_outcomes - min(n, m)
    return peters_win / total_outcomes