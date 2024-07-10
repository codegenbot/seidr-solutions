def dice_game(n, m):
    if n > m:
        return 1 - (m / (n * m))
    else:
        return sum([i / (n * m) for i in range(1, n)]) + (1 / (n * m)) * (1 - (n / m))