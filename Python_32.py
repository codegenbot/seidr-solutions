def find_zero(xs: list):
    def poly(coeffs: list, x: int) -> int:
        result = 0
        for i in range(len(coeffs)):
            result += coeffs[i] * (x ** i)
        return result

    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")

    max_coeff = max(abs(coeff) for coeff in xs)
    if max_coeff == 0:
        return 0

    for x in range(-1000, 1001):
        if poly(xs, x) == 0:
            return x