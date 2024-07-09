def dice_game(n, m):
    return sum((i < j) / n for i in range(1, m) for j in range(i+1, n)) / (n * m)