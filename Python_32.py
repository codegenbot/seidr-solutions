def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")

    a = xs[0]
    b = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = xs[-1]

    if c == 0:
        return "undefined"
    else:
        return -b / (2 * c)