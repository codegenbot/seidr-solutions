def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    for i in range(len(xs) - 2, -1, -1):
        xs[i] -= a * xs[i+1]
    return round(-xs[0]/xs[1], 2)