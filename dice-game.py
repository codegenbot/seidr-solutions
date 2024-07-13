def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m) for j in range(n) if i < j)
    return peters_win / total_outcomes