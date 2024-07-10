```
def add(x: int, y: int):
    return x + y


while True:
    try:
        while True:
            try:
                x = int(input("Enter first number: "))
                y = int(input("Enter second number: "))
                print("The sum is: ", add(x, y))
                response = input("Do you want to calculate the sum again? (yes/no): ")
                while response.lower() not in ["yes", "no"]:
                    print("Invalid input. Please enter 'yes' or 'no'.")
                    response = input(
                        "Do you want to calculate the sum again? (yes/no): "
                    )
                if response.lower() == "no":
                    break
            except ValueError:
                print("Invalid input. Please enter an integer.")
    except Exception as e:
        print(f"Error: {e}. Goodbye!")
        break