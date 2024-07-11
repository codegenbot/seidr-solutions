def find_zero(xs: list):
    """Find the zero point on the line defined by (x1, y1) and (x2, y2).
    Args:
        xs (list): A list of two points [(x1, y1), (x2, y2)].
    Returns:
        float: The zero point on the line.
    """
    return -xs[1] / xs[0]