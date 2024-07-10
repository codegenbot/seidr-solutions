def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    
    a = xs[-1]
    b = sum([xs[i] * (i % 2 * 2 - 1) for i in range(n-1, -1, -1)])
    
    return -a / b