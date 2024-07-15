```
def dice_game(n, m):
    total = n * m
    peter_higher = sum(min(i, j) for i in range(1, n+1) for j in range(1, m+1)) + (n*m - min(m, n))
    return peter_higher / total