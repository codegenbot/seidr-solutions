

def derivative(xs: list) -> list:
    """ xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
     Return derivative of this polynomial in the same form.
    for i in range(len(xs)):
        xs[i] *= i
    xs.remove(0)
    return xs
    """
