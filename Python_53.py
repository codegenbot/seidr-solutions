def add(x: int, y: int):
    total = x + y
    if total % 2 == 0:
        return f"The sum of {x} and {y} is even."
    else:
        return f"The sum of {x} and {y} is odd."