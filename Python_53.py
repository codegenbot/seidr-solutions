def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
    except ValueError:
        print("Invalid input. Please enter integers only.")
    else:
        result = add(x, y)
        print(result)
        break