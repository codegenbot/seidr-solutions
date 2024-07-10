def dice_game(n, m):
    same = 1 / (n + m)
    return m * (1 - 1/n) / (n + m) - same