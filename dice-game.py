def roll_dice(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 0.5
    else:
        return m / n