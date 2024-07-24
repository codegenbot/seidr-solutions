def roll_dice(n, m):
    if n > m:
        return 1 - (n / (n + m))
    elif n < m:
        return m / (n + m)
    else:
        return 0.5