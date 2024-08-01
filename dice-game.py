def dice_game(n, m):
    if n < 1 or m < 1:
        return 0.0

    return (n - 1) / (n * m)