```
def add(x: int, y: int):
    if type(x) != int or type(y) != int:
        return "Invalid input"
    else:
        return x + y