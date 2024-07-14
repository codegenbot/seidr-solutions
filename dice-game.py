def dice_game(n, m):
    return 1 - (n / (n + m)) if n > m else (m / (n + m))