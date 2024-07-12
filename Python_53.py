```
def add(x: int, y: int):
    try:
        return x + y
    except TypeError:
        return "Error: Both inputs must be integers."