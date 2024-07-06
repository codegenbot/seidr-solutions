def add(x, y):
    # Check if inputs are valid
    try:
        x = float(x)
        y = float(y)
    except ValueError:
        raise ValueError("Inputs must be floating-point numbers")

    return x + y