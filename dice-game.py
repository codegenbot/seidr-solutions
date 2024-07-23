```
def roll_dice(n, m):
    return sum(1 for i in range(m) for j in range(i+1, n+1)) / (n * m)