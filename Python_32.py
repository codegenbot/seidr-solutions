def find_zero(xs):
    zero = sum(x / len(xs) for x in xs)
    return zero