import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    def f(x):
        return poly(xs, x)

    def df(x):
        return sum([i * coeff * math.pow(x, i - 1) for i, coeff in enumerate(xs) if i != 0])

    x0 = 0
    for _ in range(100):
        x1 = x0 - f(x0) / df(x0)
        if abs(x1 - x0) < 1e-7:
            return x1
        x0 = x1
    return x0