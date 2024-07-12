```
def find_zero(xs: list):
    """
    This function calculates the zero of a quadratic equation given its coefficients.
    
    Parameters:
    xs (list): A list containing the coefficients of the quadratic equation in the order [a, b, c, d].
    
    Returns:
    float: The zero of the quadratic equation rounded to 2 decimal places.
    
    Raises:
    ValueError: If the number of coefficients is odd.
    """
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)