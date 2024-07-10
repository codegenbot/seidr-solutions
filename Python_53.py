def add(x: int, y: int):
    return x + y

while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        print("The sum is: ", add(x, y))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")