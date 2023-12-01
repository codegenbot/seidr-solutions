def eval_poly(coeffs: list, x: float) -> float:
    return sum([coeff * x**i for i, coeff in enumerate(coeffs)])


def find_zero(coeffs: list) -> float:
    a, b = coeffs[:2]
    return round((-a / b), 2)