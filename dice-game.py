def roll_higher(n, m):
    if n <= m:
        return 0
    else:
        return sum(1/n for _ in range(1, m)) / (n*m)