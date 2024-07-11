def find_zero_coefficients(quad_equation: list):
    """
    This function takes a list of coefficients from a quadratic equation in the form ax^2 + bx + c = 0 and 
    returns the value of x where the equation becomes zero.
    
    Args:
    quad_equation (list): A list containing the coefficients of the quadratic equation in the order [a, b, c]
    
    Returns:
    float: The value of x where the quadratic equation becomes zero
    """
    if len(quad_equation) % 2 != 0:
        raise ValueError("The number of coefficients must be even")
    max_coeff = abs(max(quad_equation))
    return -quad_equation[1] / (2 * quad_equation[0])