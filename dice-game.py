def dice_game(n, m):
    return sum((n - i) * (m - j) / (n * m) for i in range(1, n) for j in range(1, m))