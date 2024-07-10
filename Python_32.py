def find_zero(coeffs: list) -> float:
    n = len(coeffs)
    if n % 2 != 0:
        raise ValueError("coeffs must have even number of coefficients")
    x = -coeffs[1] / coeffs[n - 1]
    return round(x, 6)