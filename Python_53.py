def add(x: int, y: int):
    if not isinstance(x, int) or not isinstance(y, int):
        return "Invalid input. Please enter positive integers."
    if x < 0 or y < 0:
        return -1 * (abs(x) + abs(y))
    else:
        return x + y