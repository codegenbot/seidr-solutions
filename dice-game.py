def dice_game(n, m):
    total = n * m
    if n > m:
        return (n - 1) / (total - 1)
    else:
        return (m - 1) / (total - 1)