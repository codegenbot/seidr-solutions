from scipy.optimize import fsolve


def find_zero(xs: list):
    def poly(x):
        return sum([coeff * x**i for i, coeff in enumerate(xs)])

    return fsolve(poly, 0)[0]