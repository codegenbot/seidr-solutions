```
def add(x: int, y: int):
    if not isinstance(x, int) or not isinstance(y, int):
        raise ValueError("Both inputs should be integers.")
    return x + y