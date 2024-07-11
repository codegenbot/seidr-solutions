def add(x: int, y: int) -> int:
    try:
        x = int(x)
        y = int(y)
        result = x + y
        print(f"Result: {result}")
    except ValueError:
        print("Invalid input. Please enter integers.")