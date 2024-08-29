def dice_game(n, m):
    return 1 - sum(1 / i**n for i in range(1, m + 1)) / n