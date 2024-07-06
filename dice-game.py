def dice_game(n, m):
    if n <= m:
        return sum(1 / i for i in range(1, m + 1)) / (n * m)
    else:
        return sum((m - k + 1) / (n * m) for k in range(1, n + 1))