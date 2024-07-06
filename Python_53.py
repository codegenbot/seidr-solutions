```
def add(x: int, y: int):
    if isinstance(y, int) and isinstance(x, int):
        return x + y
    else:
        print("Invalid input. Please enter integers.")
        return None