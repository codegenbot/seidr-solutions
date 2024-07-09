def dice_game(n, m):
    return sum((1 / n) * (1 - i / m) for i in range(1, min(n, m) + 1))