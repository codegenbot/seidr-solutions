```
def add():
    x = float(input("Enter a number for x: "))
    y = float(input("Enter a number for y: "))
    result = x + y
    while True:
        user_input = input(f"Result: {result}. Do you want to continue? (yes/no): ")
        if user_input.lower() in ["yes", "no"]:
            break
        print("Invalid input. Please enter yes or no")
    
    if user_input.lower() == "yes":
        while True:
            try:
                num1 = float(input("Enter a number for x: "))
                num2 = float(input("Enter a number for y: "))
                result = num1 + num2
                print(f"Result: {result}")
                return
            except ValueError:
                print("Both inputs must be numbers")
    elif user_input.lower() == "no":
        return result