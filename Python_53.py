```
def add(x: int, y: int) -> int:
    return x + y


while True:
    try:
        while True:
            try:
                x = int(input("Enter first number: "))
                if x < 0:
                    print("Invalid input. Please enter a non-negative integer.")
                    continue
                y = int(input("Enter second number: "))
                if y < 0:
                    print("Invalid input. Please enter a non-negative integer.")
                    continue
                print("The sum is: ", add(x, y))
                while True:
                    response = input("Do you want to calculate the sum again? (yes/no): ")
                    if response.lower() in ["yes", "no"]:
                        break
                    print("Invalid input. Please enter 'yes' or 'no'.")
                if response.lower() == "no":
                    break
            except ValueError:
                print("Invalid input. Please enter an integer.")
    except Exception as e:
        print(f"Error: {e}. Goodbye!")
        break