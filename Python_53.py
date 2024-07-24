def add(x: int, y: int) -> int:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        return x + y
    except ValueError:
        return "Invalid input"