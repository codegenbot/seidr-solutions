def add(x: int, y: int) -> int:
    try:
        x = int(input("Enter first integer: "))
        y = int(input("Enter second integer: "))
        result = x + y  
        print(f"Result: {result}")
    except ValueError:
        print("Invalid input. Please enter integers.")