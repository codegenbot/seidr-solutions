def solve(n, m):
    if n < m:
        return 0.0
    if n == m:
        return 0.5
    return (n - m) / (n)