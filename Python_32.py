def find_zero(xs: list):
    """Solves the equation xs[0]*x + xs[1] = 0.

    Args:
        xs (list): A list of two numbers representing the coefficients of the linear equation.

    Returns:
        float: The solution to the equation, or None if the equation has no real solution.
    """
    return -xs[1] / xs[0]