def roll_dice(n, m):
    return (n - m) / (n + m - 2) if n > m else 0.5