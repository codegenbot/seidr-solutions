```Python
def roll_dice(n, m):
    return sum((i - 1) / (n * m - 1) for i in range(2, n+1)) / (n * m)