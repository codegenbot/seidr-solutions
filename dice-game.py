def dice_game(n, m):
    return sum(1 for i in range(m, n)) / (n * m)