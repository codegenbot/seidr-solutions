def derivative(xs: list):
    return [xi * (i + 1) for i, xi in enumerate(xs[1:])]