def add(x: int, y: int):
    if isinstance(x, int) and isinstance(y, int):
        return x + y
    else:
        raise ValueError("Invalid input type. Both inputs must be integers.")