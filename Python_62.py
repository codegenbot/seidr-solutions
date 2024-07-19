def derivative(xs: list):
    return [xs[i+1] * (i+1) for i in range(len(xs)-1)]