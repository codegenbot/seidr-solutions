import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    def derivative(xs: list):
        return [i * coeff for i, coeff in enumerate(xs)][1:]

    def newton_method(xs: list, x0: float):
        for _ in range(100):  # max iterations
            f_x = poly(xs, x0)
            if abs(f_x) < 1e-7:  # tolerance level
                return x0
            f_prime_x = poly(derivative(xs), x0)
            if f_prime_x == 0:
                break
            x0 = x0 - f_x / f_prime_x
        return x0

    return newton_method(xs, 0.0)