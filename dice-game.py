```
def roll_dice(n, m):
    peters_higher = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j)
    return peters_higher / (n * m)