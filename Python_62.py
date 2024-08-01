def derivative(xs: list):
    return [
        i * x
        for i, x in zip([x * (len(xs) - 1 - i) for i in range(len(xs) - 1)], xs[1:])
    ]