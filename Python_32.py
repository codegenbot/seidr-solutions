def find_zero(xs: list):
    # Find the largest non-zero coefficient in xs
    max_coeff = max([abs(coeff) for coeff in xs if coeff != 0])
    # Find the smallest absolute value of a non-zero coefficient in xs
    min_coeff = min([abs(coeff) for coeff in xs if coeff != 0])
    # Initialize x as the largest non-zero coefficient divided by the smallest absolute value of a non-zero coefficient
    x = max_coeff / min_coeff
    # Loop until the polynomial evaluated at x is close to zero
    while abs(poly(xs, x)) > 1e-6:
        # Update x based on the previous iteration
        x -= poly(xs, x) / poly(xs, x + 1)
    return x
