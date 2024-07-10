def dice_game(n, m):
    if n > m:
        return 1 - (m + 1) / (n * 1.0)
    elif n < m:
        return (m - 1) / (n * 1.0)
    else:
        return 0.5