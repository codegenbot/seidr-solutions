def dice_game(n, m):
    p = (n - 1) / n
    q = min(1, min(n, m) / (n * m))
    return p - q