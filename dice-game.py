def roll_higher(n, m):
    if n <= m:
        return 0
    else:
        return sum(1/n for _ in range(m+1, n+1)) / (n*m)