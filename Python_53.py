def add(x: int, y: int):
    return x + y


try:
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            print(f"The sum is: {add(x, y)}")

            response = input("Do you want to calculate the sum again? (yes/no): ")
            if response.lower() != "yes":
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")
except EOFError:
    print("Goodbye!")
finally:
    exit()