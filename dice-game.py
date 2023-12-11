def get_probability(n, m):
    if n == m:
        return 0.5
    elif n < m:
        return 1 - (m - n) / (m * n)
    else:
        return n / (n * m)