def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even.")
    
    max_coeff = max(xs, key=abs)
    possible_zeros = [i for i, coeff in enumerate(xs) if coeff == max_coeff]
    
    for zero_index in possible_zeros:
        if poly(xs, zero_index) == 0:
            return zero_index

    raise ValueError("No zero found.")