def roll_higher(n, m):
    if n <= m:
        return 0
    else:
        return sum(1/m for _ in range(n-m)) / (n*m)