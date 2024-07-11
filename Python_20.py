def find_closest_elements():
    while True:
        try:
            num1 = float(input("Enter the first number: "))
            num2 = float(input("Enter the second number: "))
            return (num1, num2)
        except ValueError:
            print("Invalid input. Please enter valid numbers.")