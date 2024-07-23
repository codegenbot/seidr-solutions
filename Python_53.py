def add(x: int, y: int):
    if not isinstance(x, int) or not isinstance(y, int):
        return "Input should be integers."
    else:
        return x + y