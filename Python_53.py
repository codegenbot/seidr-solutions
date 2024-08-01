```
def add(x: int, y: int):
    if not isinstance(x, int) or not isinstance(y, int):
        return "Invalid input. Both inputs must be integers."
    return x + y