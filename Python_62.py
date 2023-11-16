

def derivative(xs: list):
    """xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
     Return derivative of this polynomial in the same form.
    >>> derivative([3, 1, 2, 4, 5])
    [1, 4, 12, 20]
    >>> derivative([1, 2, 3])
    [2, 6]
    for i in range(len(xs)):
        xs[i] = xs[i] * i
    xs.remove(0)
    return xs

def evaluate(xs: list, x: float):
    """ xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
    Return the value of the polynomial at x.
    >>> evaluate([3, 1, 2, 4, 5], 1)
    15
    >>> evaluate([3, 1, 2, 4, 5], 0)
    3
    """
    res = 0
    for i in range(len(xs)):
        res = res * x + xs[i]
    return res

def find_root(xs: list, x: float, epsilon: float):
    """ xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
    Start at x, and find a root of the polynomial.
    Return the root.
    >>> find_root([3, 1, 2, 4, 5], 1, .1)
    -1.7999999999999998
    """
    fxs = evaluate(xs, x)
    dxs = derivative(xs)
    while abs(fxs) > epsilon:
        fxs = evaluate(xs, x)
        dxs = derivative(xs)
        x = x - fxs / dxs
    return x

def find_roots(xs: list, epsilon: float):
    """ xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
    Return a list of all roots of the polynomial.
    >>> find_roots([3, 1, 2, 4, 5], .1)
    [-1.8, -0.4, 2.9]
    """
    dxs = derivative(xs)
    x = 0
    roots = []
    while abs(evaluate(xs, x)) > epsilon:
        x = find_root(xs, x, epsilon)
        roots.append(x)
        x = x + 1
    return roots

if __name__ == "__main__":
    import doctest
    doctest.testmod()
    """
