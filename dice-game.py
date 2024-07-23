def dice_game(n, m):
    return sum((1 / (n * m)) for x in range(m + 1, n + 1))