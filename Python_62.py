def derivative(xs: list):
    return [i * xs[i] for i in range(1, len(xs))]