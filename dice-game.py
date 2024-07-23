def roll_dice(n, m):
    return sum((min(n, i) - 1) / ((n * m) - n) for i in range(2, min(n, m)+1))