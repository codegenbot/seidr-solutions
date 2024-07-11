def find_zero_of_polynomial(xs):
    """
    Calculate the zero of a polynomial given its coefficients.

    The input is a list xs representing the coefficients of a polynomial
    with an even number of terms. For example, [1, -4, 6, -4] represents
    the polynomial x^3 - 4x^2 + 6x - 4.

    Args:
        xs: A list of coefficients of a polynomial

    Returns:
        The zero of the given polynomial
    """
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = abs(max(xs))
    return -xs[1] / (2 * xs[0])