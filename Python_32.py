def find_zero(xs):
    result = sum(x * (2 ** i) for i, x in enumerate(reversed(xs)))
    if result == 0:
        return 0
    return result ** (1 / len(xs))