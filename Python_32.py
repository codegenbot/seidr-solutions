def find_zero(xs: list):
    def f(x):
        return poly(xs, x)

    def df(x):
        h = 1e-6
        return (f(x + h) - f(x)) / h

    x0 = 0
    for _ in range(100):
        x1 = x0 - f(x0) / df(x0)
        if abs(x1 - x0) < 1e-6:
            return x1
        x0 = x1
    return x0