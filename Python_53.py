def add_numbers():
    while True:
        print("Please enter two numbers.")
        x = input("Enter first number: ")
        y = input("Enter second number: ")
        if x.isdigit() and y.isdigit():
            return int(x) + int(y)


result = add_numbers()
print(result)