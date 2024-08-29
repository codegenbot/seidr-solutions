def probability(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 0.5
    else:
        return sum(1/n for _ in range(m-1)) + (m - 1) / n