def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = xs[0]
    b = sum([coeff * (i ** (-1)) for i, coeff in enumerate(xs)[1:]])
    x = -a / b
    return round(x, 2)