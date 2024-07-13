def dice_game(n, m):
    if n < m:
        return 0.0
    total = n * m
    peter_higher = (n - m) + 1
    return peter_higher / total