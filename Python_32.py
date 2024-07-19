def poly(coeffs: list, x: int) -> int:
    result = 0
    for i in range(len(coeffs)):
        result += coeffs[i] * (x ** i)
    return result