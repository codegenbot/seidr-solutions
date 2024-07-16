def roll_higher(n, m):
    return sum(min(i, n-1) for i in range(m)) / (n*m)