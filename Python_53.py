def add(x: int, y: int):
    total = x + y
    if total % 2 == 0:
        return "The sum is even."
    else:
        return "The sum is odd."