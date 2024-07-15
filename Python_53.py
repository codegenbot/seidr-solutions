def add(x: int, y: int) -> int:
    try:
        x = int(input())
        y = int(input())
    except ValueError:
        return "Invalid input"
    return x + y