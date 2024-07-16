def dice_game(n, m):
    return (n - 1) / n * sum(1/i for i in range(1, m)) / (n + m - 2)