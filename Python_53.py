def add(x: int, y: int):
    while True:
        if not (isinstance(x, (int, float)) and isinstance(y, (int, float))):
            print("Both inputs must be numbers")
            x = float(input("Enter a number for x: "))
            y = float(input("Enter a number for y: "))
        else:
            result = x + y
            while True:
                user_input = input(f"Result: {result}. Do you want to continue? (yes/no): ")
                if user_input.lower() == 'no':
                    break