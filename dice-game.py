def dice_game(n, m):
    return (m - 1) / n + sum([i < j for i in range(1, n) for j in range(1, m)]) / (n * m)