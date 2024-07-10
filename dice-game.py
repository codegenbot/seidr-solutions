def roll_higher(n, m):
    return sum((i > j) * (1/(n*m)) for i in range(1, n+1) for j in range(1, m+1))