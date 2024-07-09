def solve_task():
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))
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