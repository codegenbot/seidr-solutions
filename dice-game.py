def dice_game(n, m):
    return (n - 1) / m + sum(1/i for i in range(2, min(n, m) + 1))