def roll_higher(n, m):
    if n > m:
        return 1 / (m * (n - m))
    elif n < m:
        return 1 / (n * (m - n))
    else:
        return 0.5