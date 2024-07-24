def add(x: int, y: int):
    while True:
        try:
            x = float(input("Enter a number for x: "))
            y = float(input("Enter a number for y: "))
        except ValueError:
            print("Both inputs must be numbers")
        else:
            break
    result = x + y

    user_input = input(f"Result: {result}. Do you want to continue? (yes/no): ")

    while True:
        if user_input.lower() in ["yes", "no"]:
            break
        user_input = input("Invalid input. Please enter yes or no: ")

    if user_input.lower() == "yes":
        print(f"Result: {result}.")
    else:
        print("Goodbye!")