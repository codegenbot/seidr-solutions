def probability_peter_wins(n, m):
    if n < m:
        return 0.0
    if m < n <= m + (m - 1):
        return 1.0
    return (n - m) / (n)