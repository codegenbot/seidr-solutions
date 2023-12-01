def poly(xs: list, x: float):
    return sum([coeff * x**i for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    if xs[1] == 0:
        return None
    return round((-xs[0] / xs[1]), 2)