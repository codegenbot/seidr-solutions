def find_zero(xs: list):
    if len(xs) < 2:
        raise ValueError("List must have at least two elements")
    for x in xs:
        if not isinstance(x, (int, float)):
            raise TypeError("All elements of the list must be numbers")
    return -xs[0] / xs[-1]