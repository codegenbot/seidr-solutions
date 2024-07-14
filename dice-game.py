def roll_higher(n, m):
    return 1 - (n / (n + m)) if n > m else 1 - (m / (n + m))