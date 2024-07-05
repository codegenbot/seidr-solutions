import math
from scipy.optimize import fsolve

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return fsolve(lambda x: poly(xs, x), 0)[0]

if __name__ == "__main__":
    xs = list(map(float, input().split()))
    zero = find_zero(xs)
    print(zero)