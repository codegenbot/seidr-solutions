def solve_task():
    while True:
        try:
            num1 = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    while True:
        try:
            num2 = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    result = num1 + num2
    while True:
        response = input("Are you sure? (y/N): ")
        if response.lower() == "y":
            break
        else:
            print("Invalid input. Please enter y or N.")
    print(f"Result: {result}")
    return result


solve_task()