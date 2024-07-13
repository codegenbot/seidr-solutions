def dice_game(n, m):
    total = n * m
    peter_wins = sum((i > j) for i in range(1, n+1) for j in range(1, min(m,n)+1))
    return peter_wins / total