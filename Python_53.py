def add(x, y):
    return x + y

try:
    print("Enter the first integer:")
    x = int(input())

    print("Enter the second integer:")
    y = int(input())

    result = add(x, y)
    print(result)
except ValueError:
    print("Invalid input. Please enter valid integers.")