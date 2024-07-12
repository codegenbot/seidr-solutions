def add(x: int, y: int) -> int:
    if not isinstance(x, int) or not isinstance(y, int):
        return "Invalid input. Please enter integers."
    return x + y