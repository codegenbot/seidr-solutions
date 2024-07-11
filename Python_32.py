def find_zero(xs: list):
    """Returns the x-coordinate where the line defined by two points (xs[0], xs[1]) and (xs[2], xs[3]) intersects the x-axis.
    The function assumes that xs is a list of four numbers, representing the coordinates of two points in a plane.
    """
    return -xs[1] / xs[0]