def derivative(xs: list):
    return [i * x for i, x in zip([(i + 1) for i in range(len(xs))], xs)]