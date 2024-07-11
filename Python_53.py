def add(x: int, y: int):
    return x + y

try:
    while True:
        num1 = input("Enter first number: ")
        if num1.isdigit():
            num1 = int(num1)
            break
        else:
            print("Invalid input. Please enter integers.")
    
    while True:
        num2 = input("Enter second number: ")
        if num2.isdigit():
            num2 = int(num2)
            break
        else:
            print("Invalid input. Please enter integers.")

    result = add(num1, num2)
    print(f"Result: {result}")
except OverflowError:
    print("Number is too large.")