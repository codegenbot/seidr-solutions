def find_zero(xs: list):
    if len(xs) % 2 != 0 or xs[-1] == 0:
        raise ValueError(
            "The given coefficients do not form a polynomial with an even number of terms and a non-zero leading coefficient."
        )

    # Implement the Newton's method for finding roots of polynomials here
    x = 0.0
    while abs(poly(xs, x)) > 1e-6:
        x -= poly(xs, x) / poly(xs[1:], x)

    return x