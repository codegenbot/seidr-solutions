def derivative(xs: list):
    return [i * x for i, x in enumerate(xs[1:], start=1)]