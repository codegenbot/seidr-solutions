def find_polynomial_zeros(xs: list):
    """
    This function takes a list of coefficients representing a polynomial 
    equation of degree 3 (ax^3 + bx^2 + cx + d = 0) and returns the x value 
    where the polynomial is equal to zero.

    Args:
        xs (list): A list of four coefficients: a, b, c, and d.

    Returns:
        float: The x value where the polynomial is equal to zero.
    """
    import math

    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0
    
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    
    return round(x, 2)