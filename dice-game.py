def dice_game(n, m):
    return sum(1 / i for i in range(min(n, m) + 1)) / (n * m)