def dice_game(n, m):
    return m * ((n - m) / (n * m)) + sum((n - j) / n for j in range(m + 1))