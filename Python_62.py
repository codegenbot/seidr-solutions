

def derivative(xs: list):
    """xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
     Return derivative of this polynomial in the same form.
    >>> derivative([3, 1, 2, 4, 5])
    [1, 4, 12, 20]
    >>> derivative([1, 2, 3])
    [2, 6]
    derivative_list = []
    for i in range(1, len(xs)):
        derivative_list.append(i * xs[i])
    return derivative_list


def evaluate(xs: list, x: float):
    """
    xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
    Return the value of this polynomial evaluated at x.
    >>> evaluate([3, 1, 2, 4, 5], 2)
    109
    >>> evaluate([1, 2, 3], 3)
    28
    """
    result = 0
    for i in range(len(xs)):
        result += xs[i] * (x ** i)
    return result


def integrate(xs: list, x: float):
    """
    xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
    Return the value of the integral of this polynomial evaluated at x.
    >>> integrate([3, 1, 2, 4, 5], 2)
    523.0
    >>> integrate([1, 2, 3], 3)
    32.0
    """
    result = 0
    for i in range(len(xs)):
        result += xs[i] * (x ** (i + 1)) / (i + 1)
    return result


def main():
    print(derivative([3, 1, 2, 4, 5]))
    print(derivative([1, 2, 3]))
    print(evaluate([3, 1, 2, 4, 5], 2))
    print(evaluate([1, 2, 3], 3))
    print(integrate([3, 1, 2, 4, 5], 2))
    print(integrate([1, 2, 3], 3))


if __name__ == "__main__":
    main()
    """
