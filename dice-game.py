def dice_game(n, m):
    return sum(i/n for i in range(1, n)) * (m / (n + m))