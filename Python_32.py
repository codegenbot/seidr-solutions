def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0 or n < 2:
        raise ValueError("The number of coefficients must be even and greater than 1.")
    max_coeff = max(xs[1:])
    if max_coeff != 0:
        for i in range(n):
            if xs[i] == max_coeff or xs[i] == -max_coeff:
                return -i / xs[i]
    return 0