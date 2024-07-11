def find_zero(xs: list):
    """Find the point where the line defined by (x1, y1) and (x2, y2) intersects the x-axis.

    Args:
        xs (list): A list of two tuples, each containing an x-coordinate and a y-coordinate.

    Returns:
        float: The x-coordinate of the intersection point.
    """
    return -xs[1][1] / xs[0][0]