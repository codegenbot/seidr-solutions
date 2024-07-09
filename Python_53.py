def add(x, y):
    return x + y

try:
    x = int(input("Enter the first number: "))
    y = int(input("Enter the second number: "))

    result = add(x, y)
    print(result)
except ValueError:
    print("Invalid input. Please enter valid integers.")