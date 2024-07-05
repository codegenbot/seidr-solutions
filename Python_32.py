import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    def derivative(xs):
        return [i * xs[i] for i in range(1, len(xs))]
    
    def newton_raphson(xs, guess=0.0, tolerance=1e-7, max_iter=1000):
        for _ in range(max_iter):
            f = poly(xs, guess)
            if abs(f) < tolerance:
                return guess
            f_prime = poly(derivative(xs), guess)
            if f_prime == 0:
                break
            guess -= f / f_prime
        return guess

    return newton_raphson(xs)