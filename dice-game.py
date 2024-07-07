```
def roll_dice(n, m):
    return sum(1 / n for _ in range(m-1)) / (n * m - 1)