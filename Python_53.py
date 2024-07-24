def add(x: int, y: int):
    while True:
        try:
            x = float(input("Enter a number for x: "))
            y = float(input("Enter a number for y: "))
            break
        except ValueError:
            print("Both inputs must be numbers")
    
    result = x + y
    user_input = input(f"Result: {result}. Do you want to continue? (yes/no): ")
    if user_input.lower() == 'no':
        return None
    
    while True:
        choice = input("Enter 'y' to add again, or any other key to stop: ")
        if choice.lower() != 'y':
            return result