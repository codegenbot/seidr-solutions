def add(*args):
    if len(args) < 2:
        raise ValueError("Please provide at least two input values")
    total = 0
    for arg in args:
        if not isinstance(arg, float):
            raise ValueError("Inputs must be floating-point numbers")
        total += arg
    return total