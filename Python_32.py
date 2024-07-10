```
def find_zero coefficients: list):
    n = len(coefficients)
    if n % 2 != 0:
        raise ValueError("coefficients must have even number of coefficients")
    numerator = sum([c for i, c in enumerate(coefficients) if i % 2 == 1])
    denominator = sum([c for i, c in enumerate(coefficients) if i % 2 == 0])
    return -numerator / denominator