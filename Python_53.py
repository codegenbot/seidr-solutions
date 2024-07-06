def add(x: int, y: int) -> int:
    try:
        return x + y
    except TypeError:
        print("Invalid input. Please enter integers.")
        return None

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

print(add(num1, num2))