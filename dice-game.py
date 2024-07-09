def dice_game(n, m):
    return (n - 1) / (n * m) + sum(1 / (i * n) for i in range(2, m))