def derivative(xs: list):
    return [xi * i for i, xi in enumerate(xs[1:], start=1)]