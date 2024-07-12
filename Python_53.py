def multiply_two_numbers(x, y):
    return x * y

try:
    x, y = map(int, input("Enter two integers separated by a space: ").split())
    result = multiply_two_numbers(x, y)
    print("Result of multiplication:", result)
except ValueError:
    print("Invalid input. Please enter integers only.")