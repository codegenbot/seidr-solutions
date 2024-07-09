def derivative(xs: list):
    return [i * x for i, x in zip(range(1, len(xs)), xs)]