def get_probability(n, m):
    return np.sum([1 for i in range(min(n, m), max(n, m))]) / (max(n, m) - min(n, m))