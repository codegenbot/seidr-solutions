def dice_game(n, m):
    return sum((n - i) / n * (i - 1) / (m + n - 2) for i in range(1, m))