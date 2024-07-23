def roll_dice(n, m):
    return sum((n - i) / (n * m) for i in range(1, min(i+1 for i in range(m))+1)) / 1.0