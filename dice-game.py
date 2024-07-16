def roll_higher(n, m):
    if n <= m:
        return 0
    else:
        return 1 - sum(1/m for _ in range(m)) / (n*m)