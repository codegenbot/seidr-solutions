```
def roll_dice(n, m):
    return sum(i / n for i in range(1, min(n, m) + 1)) / (n * m)