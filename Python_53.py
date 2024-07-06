def add(x: int, y: int) -> int:
    if not isinstance(x, int) or not isinstance(y, int):
        raise ValueError("Inputs must be integers.")
    return x + y