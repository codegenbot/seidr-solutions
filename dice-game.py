def dice_game(n, m):
    return sum(1 for x in range(m + 1, n + 1) for y in range(1, m + 1)) / (n * m)