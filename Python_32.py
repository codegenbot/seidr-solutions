def find_zero(xs: list):
    """Find zero by calculating -xs[1] / xs[0]
    This function takes a list of two numbers and returns the value at which the line defined by these two points crosses the x-axis.
    Args:
        xs (list): A list containing two numbers
    Returns:
        float: The value at which the line crosses the x-axis
    """
    return -xs[1] / xs[0]