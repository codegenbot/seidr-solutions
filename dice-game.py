def dice_game(n, m):
    total = n * m
    peters_wins = sum((n - i) * (m - 1) for i in range(min(m, n), n))
    return peters_wins / total