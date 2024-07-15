def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x = int(input("Enter first number: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer for the first number.")

while True:
    try:
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer for the second number.")

result = add(x, y)
print(result)