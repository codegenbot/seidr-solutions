def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    result = 0
    for i in range(1, len(xs), 2):
        result += (-1)**((i+1)//2) * xs[i] / (xs[0]**((i+1)//2))
    return result