def add(x: int, y: int):
    return x + y

num1 = None
num2 = None

while True:
    try:
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

result = add(num1, num2)
print(f"Result: {result}")