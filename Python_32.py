import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    def derivative(xs: list):
        return [i * xs[i] for i in range(1, len(xs))]

    def newton_method(xs: list, initial_guess: float = 0.0, tolerance: float = 1e-7, max_iterations: int = 1000):
        x = initial_guess
        for _ in range(max_iterations):
            fx = poly(xs, x)
            if abs(fx) < tolerance:
                return x
            dfx = poly(derivative(xs), x)
            if dfx == 0:
                break
            x -= fx / dfx
        return x

    return newton_method(xs)

coefficients = list(map(float, input().strip().split()))
print(find_zero(coefficients))