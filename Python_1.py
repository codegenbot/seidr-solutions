def solve_task():
    while True:
        try:
            num1 = int(input("Enter first number: "))
            num2 = int(input("Enter second number: "))
            result = num1 + num2
            print(result)
            return result
        except ValueError:
            print("Invalid input. Please enter a valid number.")