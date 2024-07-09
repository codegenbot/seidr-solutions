```
def roll_dice(n, m):
    return sum(min(i, n) for i in range(1, min(n, m))) / (n * m)