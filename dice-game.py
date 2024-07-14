def dice_game(n, m):
    return 1 - sum(1 / i for i in range(min(n, m) + 1)) / min(n, m)