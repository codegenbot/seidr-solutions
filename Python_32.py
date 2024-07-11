def find_zero_coeffs(a: float, b: float, c: float):
    """
    This function calculates the zero of a quadratic equation ax^2 + bx + c = 0.
    
    Args:
        a (float): The coefficient of x^2 in the equation.
        b (float): The coefficient of x in the equation.
        c (float): The constant term in the equation.
        
    Returns:
        float: The zero of the quadratic equation.
    """
    if len([a, b, c]) % 2 != 0:
        raise ValueError("The coefficients must have an even number of coefficients")
    max_coeff = abs(max([a, b, c]))
    return -b / (2 * a)