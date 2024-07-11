def derivative(xs: list):
    return [i * x for i, x in zip(xs[1:], xs[:-1])]