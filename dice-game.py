def solve(n, m):
    return 1 / (n * m) * sum(i > j for i in range(1, n + 1) for j in range(1, m + 1))