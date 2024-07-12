def derivative(xs: list):
    return [i * x for i, x in enumerate(xs[1:], 1)] if len(xs) > 1 else []