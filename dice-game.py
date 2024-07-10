def probability(n, m):
    return sum((n - k) / n for k in range(m)) if n > m else sum((m - k) / m for k in range(n))