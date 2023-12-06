def get_probability(n, m):
    from math import comb
    return (comb(n, m)) / (comb(m, m) * 1.0)