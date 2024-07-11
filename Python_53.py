def add(x: int, y: int):
    return x + y

try:
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    try:
        result = add(num1, num2)
        print(f"Result: {result}")
    except TypeError:
        print("Invalid input. Please enter two numbers.")
except ValueError:
    print("Invalid input. Please enter integers.")