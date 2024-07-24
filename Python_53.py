def add(x: int, y: int):
    while True:
        try:
            x = float(input("Enter a number for x: "))
            y = float(input("Enter a number for y: "))
        except ValueError:
            print("Both inputs must be numbers")
            continue
        result = x + y
        user_input = input(f"Result: {result}. Do you want to continue? (yes/no): ")
        if user_input.lower() == 'no':
            return result
        break