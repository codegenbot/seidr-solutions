def add_numbers():
    while True:
        print("Please enter two numbers.")
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            return x + y
        except ValueError:
            print("Invalid input. Please enter a number.")

result = add_numbers()
print(result)