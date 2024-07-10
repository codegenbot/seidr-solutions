def probability(n, m):
    if n > m:
        return 1
    elif n < m:
        return 0.5
    else:
        return 1 / (2 * min(m, n))