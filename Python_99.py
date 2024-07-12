```
def find_closest_number():
    while True:
        try:
            value = float(input("Enter a decimal number: "))
            closest_value = round(value)
            if value != closest_value:
                diff = abs(value - closest_value)
                print(f"Closest integer: {closest_value}, Difference: {diff}")
            else:
                print(f"Closest integer: {closest_value}, Difference: 0")
        except ValueError:
            print("Invalid input. Please enter a decimal number.")