def sum_squares(num1, num2):
    return square(num1) + square(num2)

def square(x):
    return x**2

def cube(x):
    return x**3

while True:
    operation = input("Enter 'square', 'cube' or 'sum_of_squares', or 'quit' to exit: ")

    if operation.lower() == "square":
        num = float(input("Enter a number: "))
        print(f"The square of {num} is {square(num)}")

    elif operation.lower() == "cube":
        num = float(input("Enter a number: "))
        print(f"The cube of {num} is {cube(num)}")

    elif operation.lower() == "sum_of_squares":
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        print(f"The sum of squares of {num1} and {num2} is {square(num1) + square(num2)}")

    elif operation.lower() == "quit":
        break

    else:
        print("Invalid operation. Please enter 'square', 'cube' or 'sum_of_squares'"