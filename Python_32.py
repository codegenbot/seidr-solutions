def find_zero coefficients: list) -> float:
    n = len(coefficients)
    if n % 2 != 0:
        raise ValueError("coefficients must have even number of terms")
    x0 = -coefficients[1] / coefficients[n-1]
    return x0