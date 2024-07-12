def find_zero coefficients):
    """
    This function calculates the zero of a quadratic equation given its coefficients.

    Args:
        coefficients (list): A list containing the coefficients of the quadratic equation.
            The list should contain at least two elements and have an even number of elements.
            The coefficients are in the order [a, b, c] where a is the coefficient of x^2,
            b is the coefficient of x, and c is the constant term.

    Returns:
        float: The zero of the quadratic equation rounded to 2 decimal places.

    Raises:
        ValueError: If the number of coefficients is not even.
    """
    from math import sqrt

    n = len(coefficients)
    if n % 2 != 0:
        raise ValueError("coefficients must have an even number of elements")

    a = coefficients[0]
    b = coefficients[1]
    c = coefficients[2] if n > 2 else 0
    d = coefficients[3] if n > 3 else 0

    x = (-b + sqrt(b**2 - 4*a*c)) / (2*a)

    return round(x, 2)