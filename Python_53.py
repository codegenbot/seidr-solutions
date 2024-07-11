```Python
def add(x: int, y: int):
    if not isinstance(x, int) or not isinstance(y, int):
        return "Invalid input. Please enter positive integers."
    if x < 0 and y < 0:
        return x + y
    else:
        return x + y