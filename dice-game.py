def dice_game(n, m):
    return 1 - (n + m - 2) / n / m if min(n, m) > 1 else 0