def derivative(xs: list):
    return [x * i for i, x in enumerate(xs[1:], start=1)]