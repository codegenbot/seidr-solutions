def dice_game(n, m):
    return 1 - (n / (2 * max(n, m)) + m / (2 * max(n, m)))