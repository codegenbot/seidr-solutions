def dice_game(n, m):
    total = n * m
    peters_wins = sum((i) * (m - 1) for i in range(1, min(m, n)))
    return peters_wins / total