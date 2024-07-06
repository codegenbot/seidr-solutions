def add(x: float, y: float) -> float:
    if not (isinstance(x, float) and isinstance(y, float)):
        raise ValueError("Inputs must be floating-point numbers")
    return x + y