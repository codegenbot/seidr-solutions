```
def calculate_sum():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            print(f"Sum is: {x + y}")
        except ValueError:
            print("Invalid input. Please enter valid integers.")

calculate_sum()