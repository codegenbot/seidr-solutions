def get_probability(n, m):
    return sum([1 for i in range(n) if i > m]) / (m * n)