def dice_game(n, m):
    return sum(1 for i in range(m+1) for j in range(i+1, n+1)) / (n * m)