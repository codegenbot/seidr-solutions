def dice_game(n, m):
    if n < m:
        return 0.0
    total = (n - m) * (n - 1 + m)
    return total / (n * m)