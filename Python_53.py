def add(x: int, y: int):
    return x + y

try:
    x = int(input("Enter first integer: "))
except ValueError:
    print("Invalid input. Please enter an integer.")
    quit()

try:
    y = int(input("Enter second integer: "))
except ValueError:
    print("Invalid input. Please enter an integer.")
    quit()

result = add(x, y)
print("Sum of the two integers:", result)