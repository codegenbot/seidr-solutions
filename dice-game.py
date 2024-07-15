def dice_game(n, m):
    return sum(1 / (n * m) for _ in range(min(m, n) - 1)) / ((min(m, n) - 1) * (n * m))