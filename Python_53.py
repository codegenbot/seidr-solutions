def add(x: int, y: int) -> int:
    try:
        result = x + y  
        print(f"Result: {result}")
    except TypeError:
        print("Invalid input. Please enter integers.")