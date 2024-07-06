def add(x: int, y: int):
    try:
        x = int(input(f"Enter the first number: "))
        y = int(input(f"Enter the second number: "))
        return x + y
    except ValueError:
        print("Invalid input. Please enter integers.")