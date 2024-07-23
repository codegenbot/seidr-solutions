def dice_game(n, m):
    return (sum(range(1, n)) - sum(range(1, min(m, n) + 1))) / (n * m)