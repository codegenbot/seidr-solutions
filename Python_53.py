def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x = int(input("Enter the first number: "))
        y = int(input("Enter the second number: "))
        print(f"The sum is {add(x, y)}")
        break
    except ValueError:
        print("Invalid input. Please enter a whole number.")