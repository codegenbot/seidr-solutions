def get_probability(n, m):
    return np.divide(np.arange(max(1, n + 1), min(m, n) + 1), m)