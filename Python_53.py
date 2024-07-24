```
def add_numbers():
    print("Please enter two numbers.")
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    return x + y

result = add_numbers()
print(result)