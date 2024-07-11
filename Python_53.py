```
def add(x: int, y: int):
    total = x + y
    return total

while True:
    try:
        num1 = int(input("Enter first number (or -1 to exit): "))
        if num1 == -1:
            break
        num2 = int(input("Enter second number: "))
        print(f"The sum of {num1} and {num2} is {add(num1, num2)}")
    except ValueError:
        print("Invalid input. Please enter a whole number.")