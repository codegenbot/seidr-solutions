def add(x: int, y: int):
    total = x + y
    return total


num1 = int(input("Enter first number: "))
while True:
    num2 = int(input("Enter second number (or 'q' to quit): "))
    if num2 == "q":
        break
    print(f"The sum of {num1} and {num2} is {add(num1, num2)}")
    num1 = num2