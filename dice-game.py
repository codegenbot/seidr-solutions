def dice_game(n, m):
    return sum(1 for i in range(1, n+1), j in range(1, m)) / (n*m) if i < j else 0 for i, j in [(i, j) for i in range(1, n+1) for j in range(1, m+1)])