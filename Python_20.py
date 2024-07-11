```
def find_closest_elements() -> float:
    while True:
        try:
            num1 = float(input("Enter the first number: "))
            num2 = float(input("Enter the second number: "))
            return abs(num2 - num1)
        except ValueError:
            print("Invalid input. Please enter valid numbers.")

print(find_closest_elements())