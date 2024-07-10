def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x = int(input("Enter first number: ").strip())
        y = int(input("Enter second number: ").strip())
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

print(add(x, y))