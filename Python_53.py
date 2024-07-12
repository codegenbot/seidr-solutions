def add(x: int, y: int):
    while True:
        try:
            num1 = int(input(f"Enter the first integer ({x}): "))
            num2 = int(input(f"Enter the second integer ({y}): "))
            return num1 + num2
        except ValueError:
            print("Error: Please enter valid integers.")