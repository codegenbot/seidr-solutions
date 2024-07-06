def add(x, y):
    try:
        x = float(x)
        y = float(y)
    except ValueError:
        raise ValueError("Inputs must be floating-point numbers")
    
    return x + y