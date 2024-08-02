def roll_dice(n, m):
    return (n - m) / (n + m) if n > m else (m - n) / (m + n)