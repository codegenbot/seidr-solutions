def dice_game(n, m):
    return sum(1/(n*m) for _ in range(m)) / (n * m)