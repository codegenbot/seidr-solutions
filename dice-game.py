def roll_higher(n, m):
    if n <= m:
        return 0
    else:
        total = sum(1 for i in range(m) for _ in range(n - m))
        return total / (n * m)