def dice_game(n, m):
    if n > m:
        return 1 - sum([1 / i for i in range(1, m + 1)]) / (n * m)
    elif n < m:
        return sum([1 / i for i in range(1, n + 1)]) / (n * m)
    else:
        return 0.5