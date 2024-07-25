from scipy.optimize import fsolve


def find_zero(xs: list):
    def f(x):
        return sum([coeff * x**i for i, coeff in enumerate(xs)])

    if len(xs) % 2 != 0:
        return None

    return fsolve(f, 0)[0]