Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        raise ValueError("xs must contain at least one non-zero coefficient")

    n = (len(xs) - 1) // 2
    a = xs[::2]
    b = xs[1::2]

    return -sum(a) / sum([ax * bx for ax, bx in zip(a, b)])