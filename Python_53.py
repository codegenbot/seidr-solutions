```
def calculate_sum():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            if x and y:
                print(x + y)
                break
            else:
                print("Both numbers are required. Please enter two valid integers.")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

calculate_sum()