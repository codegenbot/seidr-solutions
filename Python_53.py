def add(x: float, y: float) -> float:
    x = float(input("Enter a number: "))
    y = float(input("Enter another number: "))
    if not (isinstance(x, float) and isinstance(y, float)):
        raise ValueError("Inputs must be floating-point numbers")
    return x + y