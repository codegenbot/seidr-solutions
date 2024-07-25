def calculate_sum():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            print(x + y)
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

calculate_sum()