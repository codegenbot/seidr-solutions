def get_probability(n, m):
    return sum(1 for i in range(m) if i < n) / m