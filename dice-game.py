def dice_game(n, m):
    return 1 - (n / (n + m)) ** m if n > m else 1 - (m / (n + m)) ** n