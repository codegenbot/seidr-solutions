def get_probability(n, m):
    return np.sum(np.triu(np.ones((n, m)), 1)) / (n * m)