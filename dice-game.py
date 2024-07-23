def dice_game(n, m):
    if n == m:
        return 0
    else:
        return (n - 1) * (m - 1) / (n * m)