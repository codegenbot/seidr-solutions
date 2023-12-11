def get_probability(n, m):
    return np.sum(np.triu(np.ones((n, m)), k=1)) / (n * m)