def find_zero(xs: list):
    # Find the largest non-zero coefficient in xs
    largest = 0
    for i, coeff in enumerate(xs):
        if abs(coeff) > abs(largest):
            largest = coeff
            index = i

    # Check if the largest coefficient is positive or negative
    sign = 1 if largest > 0 else -1

    # Initialize the lower and upper bounds for the zero point
    lo = 0
    hi = 1

    # Perform a bisection search to find the zero point
    while abs(hi - lo) > 1e-6:
        mid = (lo + hi) / 2
        if sign * poly(xs, mid) < 0:
            hi = mid
        else:
            lo = mid

    # Return the zero point
    return mid