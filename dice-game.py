def roll_dice(n, m):
    return (min(n, m) - 1) / (n * m) + sum(1/m for _ in range(min(n, m)) if _ == min(n, m)) + sum(1/n for _ in range(m, n) if True)