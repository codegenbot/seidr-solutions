def dice_game(n, m):
    total = n * m
    peter_higher = sum(1 for i in range(2, n+1) for j in range(1, min(i, m)) if i > j)
    return peter_higher / total