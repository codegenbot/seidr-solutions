def derivative(xs: list):
    return [(i+1)*xs[i] for i in range(len(xs)-1)]