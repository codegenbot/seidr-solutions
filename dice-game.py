def dice_game(n, m):
    total = n * m
    peter_higher = sum(min(i+1, j) for i in range(m) for j in range(i+1, n+1))
    return peter_higher / total