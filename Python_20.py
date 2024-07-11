```
def find_closest_elements(numbers)-> tuple:
    while True:
        try:
            num1 = float(input(f"Enter the first number: "))
            num2 = float(input(f"Enter the second number: "))
            if abs(num1 - num2) < 0.00001:
                return (num1, num2)
            elif num1 < num2:
                return (num1, num2)
            else:
                return (num2, num1)
        except ValueError:
            print("Invalid input. Please enter valid numbers.")