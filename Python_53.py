def add(x: int, y: int):
    return x + y

try:
    while True:
        num1 = input("Enter first number: ")
        num2 = input("Enter second number: ")

        if num1.isdigit() and num2.isdigit():
            num1 = int(num1)
            num2 = int(num2)
            break
        else:
            print("Invalid input. Please enter integers.")

    result = add(int(num1), int(num2))
    print(f"Result: {result}")