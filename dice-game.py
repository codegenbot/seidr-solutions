def dice_game(n, m):
    p = sum(1 / i for i in range(1, min(n, m) + 1)) / (n * m)
    return 1 - p