def derivative(xs: list):
    return [i * x for i, x in zip(map(int, xs[1:]), range(1, len(xs)))]