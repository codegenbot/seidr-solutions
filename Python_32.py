def find_zero(xs: list):
    """Find the zero of the line that passes through points (xs[0], xs[1]) and (xs[2], xs[3]).
    The zero is calculated as -xs[1] / xs[0].

    Parameters:
    xs (list): A list containing four elements representing the x and y coordinates of two points.

    Returns:
    float: The zero of the line that passes through the given points.
    """
    return -xs[1] / xs[0]