```
while True:
    operation = input("Enter 'square', 'cube' or 'quit' to exit: ").strip().lower()

    if operation == "square":
        num = float(input("Enter a number for sum of squares: "))
        print(f"The sum of squares from 1 to {num} is {sum_squares(int(num))}")

    elif operation == "cube":
        num = float(input("Enter a number: "))
        print(f"The cube of {num} is {cube(num)}")

    elif operation == "quit":
        break

    else:
        print("Invalid operation. Please enter 'square', 'cube' or 'quit'")


def sum_squares(n):
    total = 0
    for i in range(1, n + 1):
        total += i**2
    return total


def square(x):
    return x**2


def cube(x):
    return x**3