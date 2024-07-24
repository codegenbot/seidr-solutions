def add_numbers():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            return x + y
        except ValueError:
            print("Invalid input. Please enter a number.")

result1 = add_numbers()
print("First result:", result1)