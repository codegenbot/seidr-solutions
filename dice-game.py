def dice_game(n, m):
    if n <= m:
        return 0
    else:
        return (m - 1) / (n * m)