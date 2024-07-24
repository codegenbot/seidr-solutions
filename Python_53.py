def add(x: int, y: int) -> int:
    try:
        return x + y
    except TypeError:
        return "Invalid input"