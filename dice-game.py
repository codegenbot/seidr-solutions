def roll_higher(n, m):
    return sum(1/(n*m) for k in range(m-1)) / (n*m)