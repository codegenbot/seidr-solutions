def sum_squares(n):
    total = 0
    for i in range(1, n + 1):
        total += i**2
    return total


def square(x):
    return x**2


def cube(x):
    return x**3


while True:
    operation = input("Enter 'square' or 'cube', or 'quit' to exit: ")

    if operation.lower() == "square":
        num = float(input("Enter a number: "))
        print(f"The square of {num} is {square(num)}")

    elif operation.lower() == "cube":
        num = float(input("Enter a number: "))
        print(f"The cube of {num} is {cube(num)}")

    elif operation.lower() == "quit":
        break

    else:
        print("Invalid operation. Please enter 'square' or 'cube'")