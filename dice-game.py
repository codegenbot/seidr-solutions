def roll_higher(n, m):
    return sum(1 / (n * m) for i in range(m + 1) for j in range(i)) - (m / (n + m))