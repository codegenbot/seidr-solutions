def dice_game(n, m):
    return sum((j > i) for i in range(1, m+1) for j in range(i+1, n+1)) / (n * m)