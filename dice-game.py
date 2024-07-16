def roll_higher(n, m):
    if n <= m:
        return 0
    else:
        return sum(1 for i in range(m + 1, n)) / (n * m)