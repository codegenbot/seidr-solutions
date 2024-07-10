def find_zero(xs):
    return sum(x * (2 ** i) for i, x in enumerate(reversed(xs)))