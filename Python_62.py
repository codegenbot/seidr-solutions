

def derivative(xs):
    """ xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
    >>> derivative([1])
    []
     Return derivative of this polynomial in the same form.
    >>> derivative([3, 1, 2, 4, 5]) # x^4 + 4x^3 + 6x^2 + 12x + 20
    [1, 4, 12, 20] # x^3 + 3x^2 + 6x + 12
    >>> derivative([1, 2, 3]) # x^2 + 2x + 3
    [2, 6] # 2x + 6
    return [xs[i] * (i + 1) for i in range(len(xs) - 1)]
    """
