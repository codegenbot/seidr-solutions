def poly(coeffs, x):
    return sum(c * x**i for i, c in enumerate(coeffs))