def derivative(xs: list):
    return [i * x for i, x in zip([x * (i + 1) for i, x in enumerate(xs)], xs)]