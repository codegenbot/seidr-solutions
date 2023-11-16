

def add(x: int, y: int):
    """Add two numbers x and y
    >>> add(2, 3)
    5
    >>> add(5, 7)
    12
    if not isinstance(x, int) or not isinstance(y, int):
        raise TypeError
    return x + y
    """
