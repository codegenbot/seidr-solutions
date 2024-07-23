```
def add(x: int, y: int) -> int:
    try:
        return x + y
    except TypeError:
        return "Error: Please enter integer values."