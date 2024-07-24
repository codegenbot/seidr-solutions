def add(x: int, y: int):
    x = float(input("Enter a number for x: "))
    if not isinstance(x, (int, float)):
        print("Both inputs must be numbers")
        return None
    y = float(input("Enter a number for y: "))
    if not isinstance(y, (int, float)):
        print("Both inputs must be numbers")
    else:
        result = x + y
        while True:
            user_input = input(f"Result: {result}. Do you want to continue? (yes/no): ")
            if user_input.lower() == 'no':
                return result