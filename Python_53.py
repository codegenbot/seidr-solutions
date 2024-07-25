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
            y = float(input("Enter second number: "))  
            return x + y
        except ValueError:
            print("Invalid input. Please enter a valid integer or decimal.")

calculate_sum()