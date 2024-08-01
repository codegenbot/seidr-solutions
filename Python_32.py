def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = xs[0]
    b = sum([coeff * i for i, coeff in enumerate(xs[1:], 1)])
    c = sum([coeff * math.pow(i, 2) for i, coeff in enumerate(xs[1:], 1)])
    d = -sum(xs)
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 10)