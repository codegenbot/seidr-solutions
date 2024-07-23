```
def roll_dice(n, m):
    return sum(1 for i in range(1, min(n, m) + 1)) / (n * m)