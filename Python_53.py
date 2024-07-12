def multiply_two_numbers(x, y):
    return x * y

try:
    x = int(input("Enter the first integer: "))
    y = int(input("Enter the second integer: "))
except ValueError:
    print("Invalid input. Please enter integers only.")
else:
    result = multiply_two_numbers(x, y)
    print("Result of multiplication:", result)