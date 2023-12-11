def get_probability(n, m):
    return sum(map(lambda x: x[0] > x[1], itertools.product(range(1, n + 1), range(1, m + 1)))) / (n * m)