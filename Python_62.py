

def derivative(xs: list):
    """ xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
     Return derivative of this polynomial in the same form.
    >>> derivative([3, 1, 2, 4, 5])
    [1, 4, 12, 20]
    >>> derivative([1, 2, 3])
    [2, 6]
    new_xs = []
    for i in range(1,len(xs)):
        new_xs.append(xs[i]*i)
    return new_xs

if __name__ == "__main__":
    import doctest
    doctest.testmod()
    """
