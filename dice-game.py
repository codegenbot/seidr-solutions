def dice_game(n, m):
    return 1 - n / m if n > m else 1 - m / n if m > n else 0