def dice_game(n, m):
    p = (n - 1) / (n * m)
    q = (m - 1) / (n * m)
    return 1 - p + q