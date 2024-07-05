import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    from scipy.optimize import fsolve

    def f(x):
        return poly(xs, x)

    return fsolve(f, 0)[0]


if __name__ == "__main__":
    import doctest
    doctest.testmod()