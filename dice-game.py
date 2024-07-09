```
def roll_dice(n, m):
    total = sum(min(i / n, m - i) for i in range(m))
    return total / (n * m)