Here is the solution:

def find_zero(xs: list):
    n = len(xs) // 2
    a = xs[:n]
    b = xs[n:]
    return -sum(a) / sum([a_i * b_i for a_i, b_i in zip(a, b)])