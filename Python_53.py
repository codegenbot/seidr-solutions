def add(x: int or float, y: int or float):
    # Check if inputs are valid
    if not (isinstance(x, int) or isinstance(y, int)):
        raise ValueError("Inputs must be integers")

    return x + y