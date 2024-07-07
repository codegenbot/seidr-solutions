def dice_game(n, m):
    return sum(1/n/m if i > j else 0 for i in range(1, n) for j in range(1, min(i, m)))