def find_zero(xs: list):
    """Find the zero point of a line given two points.

    Parameters:
    xs (list): A list containing two points [x1, y1] and [x2, y2]

    Returns:
    float: The x-coordinate where the line intersects the x-axis
    """
    return -xs[1] / xs[0]