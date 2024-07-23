def dice_game(n, m):
    return sum((i / n) * ((m - 1) / (n + m - 2)) for i in range(2, n))