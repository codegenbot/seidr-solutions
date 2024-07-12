def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -sum((coeff / math.factorial(i) for i, coeff in enumerate(xs[:-1])))
    return round(-b / a, 2)