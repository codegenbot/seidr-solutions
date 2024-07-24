def add_numbers(x=None, y=None):
    print("Please enter two numbers.")
    if x is None:
        x = int(input("Enter first number: "))
    elif y is None:
        y = int(input("Enter second number: "))
    else:
        return x + y

result = add_numbers()
print(result)