def roll_higher(n, m):
    if n <= m:
        return 0
    else:
        return sum(1 / (m**i) for i in range(1, n - m + 1)) / (n * m)