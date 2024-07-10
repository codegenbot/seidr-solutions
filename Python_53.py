def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x = int(input("Enter first number: ").strip())
        y = int(input("Enter second number: ").strip())
    except ValueError:
        print("Please enter valid integer inputs.")
    else:
        print(add(x, y))
        break