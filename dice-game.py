def roll_dice(n, m):
    return sum((n - i) / (n * m) for i in range(1, min(i for i in range(1, n+1) if i > m)))