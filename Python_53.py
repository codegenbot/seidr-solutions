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
                break
            except ValueError:
                print("Invalid input. Please enter an integer.")
            except EOFError as e:
                print(f"Unexpected input {e}. Goodbye!")
                exit(0)
        response = input("Do you want to calculate the sum again? (yes/no): ")
        if response.lower() != "yes":
            break
    except EOFError as e:
        print(f"Unexpected input {e}. Goodbye!")
        exit(0)