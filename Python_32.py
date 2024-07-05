from scipy.optimize import fsolve

def find_zero(xs: list):
    def f(x):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])
    return fsolve(f, 0)[0]