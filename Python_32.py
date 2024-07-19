def find_zero(xs: list):
    def poly(coeffs, x):
        return sum(coeff * x ** i for i, coeff in enumerate(coeffs))

    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")

    max_coeff = max(abs(coeff) for coeff in xs)
    if max_coeff == 0:
        return 0

    for x in range(-1000, 1001):
        if poly(xs, x) == 0:
            return x