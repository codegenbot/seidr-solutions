def add(x: int, y: int) -> int:
    return x + y


while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Invalid input. Please enter integers only.")

result = add(x, y)
print(result)