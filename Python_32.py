def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List must have even number of coefficients.")

    n = len(xs) - 1
    for i in range(n, -1, -1):
        if xs[i] != 0:
            largest_coeff_index = i
            break

    if largest_coeff_index % 2 == 1:
        raise ValueError("Largest non zero coefficient index must be even.")

    if xs[0] == 0:
        return 0.0

    a = xs[0]
    b = xs[largest_coeff_index]

    x = -a / b
    return x