def add(x: int, y: int):
    # Check if both inputs are integers
    if isinstance(x, int) and isinstance(y, int):
        return x + y
    else:
        raise ValueError("Invalid input type. Both inputs must be integers.")