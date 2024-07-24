def add_numbers():
    print("Please enter two numbers.")
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            return x + y
        except ValueError:
            print("Invalid input. Please enter a valid number.")


result = add_numbers()
print(result)