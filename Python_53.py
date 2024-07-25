def calculate_sum():
    while True:
        try:
            x = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
    
    while True:
        try:
            y = int(input("Enter second number: "))
            print(f"The sum of {x} and {y} is: {x + y}")
            return
        except ValueError:
            print("Invalid input. Please enter a valid integer.")