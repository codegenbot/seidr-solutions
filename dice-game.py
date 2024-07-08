def dice_game(n, m):
    return 1 - (n + m - 2) / (n * m) + min(m / n, n / m)