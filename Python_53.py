def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x = int(input("Enter first number as an integer: "))
        y = int(input("Enter second number as an integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter valid integers.")

result = add(x, y)
print("The sum is:", result)