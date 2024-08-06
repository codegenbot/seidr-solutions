```
def roll_dice(n, m):
    total = n * m
    greater_than_colin = sum(min(i, j) == i for i in range(1, n+1) for j in range(1, m+1)) - (n * min(n, m))
    return 1.0 * greater_than_colin / total if total else 0.0