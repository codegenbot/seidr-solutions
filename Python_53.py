```
def calculate_sum():
    while True:
        try:
            x = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
    
    while True:
        try:
            y = int(input("Enter second number: "))
            print(x + y)
            return
        except ValueError:
            print("Invalid input. Please enter a valid integer.")